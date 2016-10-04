//\begin{comment}
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
    along with SimpleOpenCL. If not, see <http://www.gnu.org/licenses/>.

   #######################################################################

   SimpleOpenCL Version 0.010_27_02_2013

*/

#ifdef __cplusplus
extern "C" {
#endif

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif

#define NB_MAX_PLATFORMS 8
#define NB_MAX_DEVICES_PER_PLATFORM 16

#define WORKGROUP_X 64
#define WORKGROUP_Y 2
#define DEBUG

#ifndef _OCLUTILS_STRUCTS
//\end{comment}
//\section{data types}
/*
\begin{lstlisting}[language=C]
*/
typedef struct {
  cl_platform_id platform;
  cl_context context;
  cl_device_id device;
  cl_command_queue queue;
  int nComputeUnits;
  unsigned long int maxPointerSize;
  int deviceType; /* deviceType 0 = GPU | deviceType 1 = CPU | deviceType 2 =
                     Accelerator | deviceType 3 = other */
  int devNum;
} sclHard;
typedef sclHard *ptsclHard;
typedef struct {
  cl_program program;
  cl_kernel kernel;
  char kernelName[98];
} sclSoft;
//\end{lstlisting}
//\begin{comment}
#define _OCLUTILS_STRUCTS
#endif

/*\end{comment}
\section{USER FUNCTIONS}
\subsection{Device memory allocation read and write}
\begin{lstlisting}[language=C]
*/

cl_mem sclMalloc(sclHard hardware, cl_int mode, size_t size);
cl_mem sclMallocWrite(sclHard hardware, cl_int mode, size_t size,
                      void *hostPointer);
void sclWrite(sclHard hardware, size_t size, cl_mem buffer, void *hostPointer);
void sclRead(sclHard hardware, size_t size, cl_mem buffer, void *hostPointer);

/*\end{lstlisting}
\subsection{initialization of sclSoft structs}
\begin{lstlisting}[language=C]
*/

void sclGetCLSoftware(const char *kernel_file, const char *kernel_name,
                      const sclHard hardware, sclSoft *Software);

/*\end{lstlisting}
\subsection{Release and retain OpenCL objects}
\begin{lstlisting}[language=C]*/

void sclReleaseClSoft(sclSoft soft);
void sclReleaseClHard(sclHard hard);
void sclRetainClHard(sclHard hardware);
void sclReleaseAllHardware(sclHard *hardList, cl_int found);
void sclRetainAllHardware(sclHard *hardList, cl_int found);
void sclReleaseMemObject(cl_mem object);

/*\end{lstlisting}
\subsection{Debug functions}
\begin{lstlisting}[language=C]*/

void sclPrintErrorFlags(cl_int flag);
void sclPrintHardwareStatus(sclHard hardware);
void sclPrintDeviceNamePlatforms(sclHard *hardList, cl_int found);

/*\end{lstlisting}
\subsection{Device execution}
\begin{lstlisting}[language=C]*/

cl_event sclLaunchKernel(sclHard hardware, sclSoft software,
                         size_t *global_work_size, size_t *local_work_size);
cl_event sclEnqueueKernel(sclHard hardware, sclSoft software,
                          size_t *global_work_size, size_t *local_work_size);
cl_event sclSetArgsLaunchKernel(sclHard hardware, sclSoft software,
                                size_t *global_work_size,
                                size_t *local_work_size,
                                const char *sizesValues, ...);
cl_event sclSetArgsEnqueueKernel(sclHard hardware, sclSoft software,
                                 size_t *global_work_size,
                                 size_t *local_work_size,
                                 const char *sizesValues, ...);
cl_event sclManageArgsLaunchKernel(sclHard hardware, sclSoft software,
                                   size_t *global_work_size,
                                   size_t *local_work_size,
                                   const char *sizesValues, ...);
/*
\end{lstlisting}
\subsection{Event queries}
\begin{lstlisting}[language=C]
*/

cl_ulong sclGetEventTime(sclHard hardware, cl_event event);

/*
\end{lstlisting}
\subsection{Queue management}
\begin{lstlisting}[language=C]
*/

cl_int sclFinish(sclHard hardware);

/*
\end{lstlisting}
\subsection{Kernel argument setting}
\begin{lstlisting}[language=C]
*/

void sclSetKernelArg(sclSoft software, int argnum, size_t typeSize,
                     void *argument);
void sclSetKernelArgs(sclSoft software, const char *sizesValues, ...);
void _sclVSetKernelArgs(sclSoft software, const char *sizesValues,
                        va_list argList);

/*
\end{lstlisting}
\subsection{Hardware init and selection}
\begin{lstlisting}[language=C]
*/

void sclGetHardwareByType(const cl_device_type device_type, const int iDevice,
                          int *found, sclHard *hardware);
void sclGetHardware(const int nDevice, sclHard *Hardware);
void sclGetGPUHardware(const int nDevice, int *found, sclHard *GPUHardware);
void sclGetCPUHardware(const int nDevice, int *found, sclHard *CPUHardware);
void sclGetAcceleratorHardware(const int iDevice, int *found,
                               sclHard *AcceleratorHardware);
// void sclGetAllHardware(int *found, sclHard *hardwareList);
void sclGetFastestDevice(const sclHard *hardList, const cl_int found,
                         sclHard *fastest);

/*
\end{lstlisting}
\section{INTERNAL FUNCITONS}
\subsection{debug}
\begin{lstlisting}[language=C]
*/

void _sclWriteArgOnAFile(int argnum, void *arg, size_t size, const char *diff);

/*
\end{lstlisting}
\subsection{cl software management}
\begin{lstlisting}[language=C]
*/

void _sclBuildProgram(cl_program program, cl_device_id devices,
                      const char *pName);
cl_kernel _sclCreateKernel(sclSoft software);
cl_program _sclCreateProgram(char *program_source, cl_context context);
char *_sclLoadProgramSource(const char *filename);

/*
\end{lstlisting}
\subsection{hardware management}
\begin{lstlisting}[language=C]
*/

int _sclGetMaxComputeUnits(cl_device_id device);
unsigned long int _sclGetMaxMemAllocSize(cl_device_id device);
int _sclGetDeviceType(cl_device_id device);
void _sclSmartCreateContexts(sclHard *hardList, cl_int found);
void _sclCreateQueues(sclHard *hardList, cl_int found);

/*\end{lstlisting}
\begin{comment}
*/
/* ######################################################## */

#ifdef __cplusplus
}
#endif
//\end{comment}
