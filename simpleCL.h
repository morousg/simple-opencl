/* #######################################################################
    Copyright 2011 Oscar Amoros Huguet, Cristian Garcia Marin

    This file is part of SimpleOpenCL.

    SimpleOpenCL is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, version 3.

    SimpleOpenCL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.

   ####################################################################### 

   SimpleOpenCL Version 0.06_01_10_2011 

*/
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif

#define WORKGROUP_X 32
#define WORKGROUP_Y 2
#define DEBUG

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _OCLUTILS_STRUCTS
typedef struct {
	cl_platform_id platform;
	cl_context context;
	cl_device_id device;
	cl_command_queue queue;
	int nComputeUnits;
	unsigned long long int maxPointerSize;
	int deviceType; /* deviceType 0 = GPU | deviceType 1 = CPU | deviceType 2 = other */
}clHard;
typedef clHard* ptclHard;
typedef struct {
	cl_program program;
	cl_kernel kernel;
	char kernelName[98];	
}clSoft;
#define _OCLUTILS_STRUCTS
#endif

/* USER FUNCTIONS */
/* ####### Device memory allocation read and write  ####### */

cl_mem 			sclMalloc( clHard hardware, cl_int mode, size_t size );
cl_mem 			sclMallocWrite( clHard hardware, cl_int mode, size_t size, void* hostPointer );
void 			sclWrite( clHard hardware, size_t size, cl_mem buffer, void* hostPointer );
void			sclRead( clHard hardware, size_t size, cl_mem buffer, void *hostPointer );

/* ######################################################## */

/* ####### inicialization of clSoft structs  ############## */

clSoft 			sclGetCLSoftware( char* path, char* name, clHard hardware );

/* ######################################################## */

/* ####### Release and retain OpenCL objects ############## */

void 			sclReleaseClSoft( clSoft soft );
void 			sclReleaseClHard( clHard hard );
void 			sclRetainClHard( clHard hardware );
void 			sclReleaseAllHardware( clHard* hardList, int found );
void 			sclRetainAllHardware( clHard* hardList, int found );

/* ######################################################## */

/* ####### Debug functions ################################ */

void 			sclPrintErrorFlags( cl_int flag );
void 			sclPrintHardwareStatus( clHard hardware );
void 			sclPrintDeviceNamePlatforms( clHard* hardList, int found );

/* ######################################################## */

/* ####### Device execution ############################### */

cl_event 		sclLaunchKernel( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size );
cl_event		sclEnqueueKernel( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size );
/*  
cl_event		sclSetAndLaunchKernel( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size, 
						const char* size&type, ... );
cl_event		sclSetAndEnqueueKernel( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size, 
						const char* size&type, ... );
*/

/* ######################################################## */

/* ####### Event queries ################################## */

cl_ulong 		sclGetEventTime( clHard hardware, cl_event event );

/* ######################################################## */

/* ####### Queue management ############################### */

cl_int			sclFinish( clHard hardware );

/* ######################################################## */

/* ####### Kernel argument setting ######################## */

void 			sclSetKernelArg( clSoft software, int argnum, size_t typeSize, void *argument );
void			sclSetKernelArgs( clSoft software, const char *sizesValues, ... );

/* ######################################################## */

/* ####### Hardware init and selection #################### */

clHard 			sclGetGPUHardware( int nDevice, int* found );
clHard 			sclGetCPUHardware( int nDevice, int* found );
int 			sclGetAllHardware( clHard** hardList);
int 			sclGetFastestDevice( clHard* hardList, int found );

/* ######################################################## */

/* INTERNAL FUNCITONS */
/* ####### cl software management ######################### */

void 			_sclBuildProgram( cl_program program, cl_device_id devices, const char* pName );
cl_kernel 		_sclCreateKernel( clSoft software );
cl_program 		_sclCreateProgram( char* program_source, cl_context context );
char* 			_sclLoadProgramSource( const char *filename );

/* ######################################################## */

/* ####### hardware management ############################ */

int 			_sclGetMaxComputeUnits( cl_device_id device );
unsigned long long int 	_sclGetMaxMemAllocSize( cl_device_id device );
int 			_sclGetDeviceType( cl_device_id device );
void 			_sclSmartCreateContexts( clHard* hardList, int found );
void 			_sclCreateQueues( clHard* hardList, int found );

/* ######################################################## */

#ifdef __cplusplus
}
#endif
