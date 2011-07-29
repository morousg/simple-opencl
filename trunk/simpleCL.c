/* #######################################################################
    Copyright 2011 Oscar Amoros Huguet, Cristian Garcia Marin

    This file is part of SimpleOpenCL

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

   SimpleOpenCL Version 0.04_29_09_2011 

*/

#include "simpleCL.h"

#ifdef __cplusplus
extern "C" {
#endif

void sclPrintErrorFlags( cl_int flag ){
    
	switch (flag){

		case CL_DEVICE_NOT_FOUND:
			printf("\nCL_DEVICE_NOT_FOUND\n");
			break;
		case CL_DEVICE_NOT_AVAILABLE:
			printf("\nCL_DEVICE_NOT_AVAILABLE\n");
			break;
		case CL_COMPILER_NOT_AVAILABLE:
			printf("\nCL_COMPILER_NOT_AVAILABLE\n");
			break;
		case CL_PROFILING_INFO_NOT_AVAILABLE:
			printf("\nCL_PROFILING_INFO_NOT_AVAILABLE\n");
			break;
		case CL_MEM_COPY_OVERLAP:
			printf("\nCL_MEM_COPY_OVERLAP\n");
			break;
		case CL_IMAGE_FORMAT_MISMATCH:
			printf("\nCL_IMAGE_FORMAT_MISMATCH\n");
			break;
		case CL_IMAGE_FORMAT_NOT_SUPPORTED:
			printf("\nCL_IMAGE_FORMAT_NOT_SUPPORTED\n");
			break;
		case CL_INVALID_COMMAND_QUEUE:
			printf("\nCL_INVALID_COMMAND_QUEUE\n");
			break;
		case CL_INVALID_CONTEXT:
			printf("\nCL_INVALID_CONTEXT\n");
			break;
		case CL_INVALID_MEM_OBJECT:
			printf("\nCL_INVALID_MEM_OBJECT\n");
			break;
		case CL_INVALID_VALUE:
			printf("\nCL_INVALID_VALUE\n");
			break;
		case CL_INVALID_EVENT_WAIT_LIST:
			printf("\nCL_INVALID_EVENT_WAIT_LIST\n");
			break;
		case CL_MEM_OBJECT_ALLOCATION_FAILURE:
			printf("\nCL_MEM_OBJECT_ALLOCATION_FAILURE\n");
			break;
		case CL_OUT_OF_HOST_MEMORY:
			printf("\nCL_OUT_OF_HOST_MEMORY\n");
			break;

		case CL_INVALID_PROGRAM_EXECUTABLE:
			printf("\nCL_INVALID_PROGRAM_EXECUTABLE\n");
			break;
		case CL_INVALID_KERNEL:
			printf("\nCL_INVALID_KERNEL\n");
			break;
		case CL_INVALID_KERNEL_ARGS:
			printf("\nCL_INVALID_KERNEL_ARGS\n");
			break;
		case CL_INVALID_WORK_DIMENSION:
			printf("\nCL_INVALID_WORK_DIMENSION\n");
			break;
#ifndef __APPLE__ 
		case CL_INVALID_GLOBAL_WORK_SIZE:
			printf("\nCL_INVALID_GLOBAL_WORK_SIZE\n");
			break;
#endif
		case CL_INVALID_WORK_GROUP_SIZE:
			printf("\nCL_INVALID_WORK_GROUP_SIZE\n");
			break;
		case CL_INVALID_WORK_ITEM_SIZE:
			printf("\nCL_INVALID_WORK_ITEM_SIZE\n");
			break;
		case CL_INVALID_GLOBAL_OFFSET:
			printf("\nCL_INVALID_GLOBAL_OFFSET\n");
			break;
		case CL_OUT_OF_RESOURCES:
			printf("\nCL_OUT_OF_RESOURCES\n");
			break;

		case CL_INVALID_PROGRAM:
			printf("\nCL_INVALID_PROGRAM\n");
			break;
		case CL_INVALID_KERNEL_NAME:
			printf("\nCL_INVALID_KERNEL_NAME\n");
			break;
		case CL_INVALID_KERNEL_DEFINITION:
			printf("\nCL_INVALID_KERNEL_DEFINITION\n");
			break;
		case CL_INVALID_BUFFER_SIZE:
			printf("\nCL_INVALID_BUFFER_SIZE\n");
			break;
		case CL_BUILD_PROGRAM_FAILURE:
			printf("\nCL_BUILD_PROGRAM_FAILURE\n");
			break;
		case CL_INVALID_ARG_INDEX:
			printf("\nCL_INVALID_ARG_INDEX\n");
			break;
		case CL_INVALID_ARG_VALUE:
			printf("\nCL_INVALID_ARG_VALUE\n");
			break;
		case CL_MAP_FAILURE:
			printf("\nCL_MAP_FAILURE\n");
			break;
		case CL_MISALIGNED_SUB_BUFFER_OFFSET:
			printf("\nCL_MISALIGNED_SUB_BUFFER_OFFSET\n");
			break;
		case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
			printf("\nCL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST\n");
			break;
		case CL_INVALID_DEVICE_TYPE:
			printf("\nCL_INVALID_DEVICE_TYPE\n");
			break;
		case CL_INVALID_PLATFORM:
			printf("\nCL_INVALID_PLATFORM\n");
			break;
		case CL_INVALID_DEVICE:
			printf("\nCL_INVALID_DEVICE\n");
			break; 
		case CL_INVALID_QUEUE_PROPERTIES:
			printf("\nCL_INVALID_QUEUE_PROPERTIES\n");
			break; 
		case CL_INVALID_HOST_PTR:
			printf("\nCL_INVALID_HOST_PTR\n");
			break;
		case CL_INVALID_IMAGE_FORMAT_DESCRIPTOR:
			printf("\nCL_INVALID_IMAGE_FORMAT_DESCRIPTOR\n");
			break;
		case CL_INVALID_IMAGE_SIZE:
			printf("\nCL_INVALID_IMAGE_SIZE\n");
			break;
		case CL_INVALID_SAMPLER:
			printf("\nCL_INVALID_SAMPLER\n");
			break;
		case CL_INVALID_BINARY:
			printf("\nCL_INVALID_BINARY\n");
			break;
		case CL_INVALID_BUILD_OPTIONS:
			printf("\nCL_INVALID_BUILD_OPTIONS\n");
			break;
		case CL_INVALID_ARG_SIZE:
			printf("\nCL_INVALID_ARG_SIZE\n");
			break;
		case CL_INVALID_EVENT:
			printf("\nCL_INVALID_EVENT\n");
			break;
		case CL_INVALID_OPERATION:
			printf("\nCL_INVALID_OPERATION\n");
			break;
		case CL_INVALID_GL_OBJECT:
			printf("\nCL_INVALID_GL_OBJECT\n");
			break;
		case CL_INVALID_MIP_LEVEL:
			printf("\nCL_INVALID_MIP_LEVEL\n");
			break;
		case CL_INVALID_PROPERTY:
			printf("\nCL_INVALID_PROPERTY\n");
			break;
		default:
			printf("\nUnknown error code: %d\n",flag);    
	}
}

char* _sclLoadProgramSource( const char *filename )
{ 
	struct stat statbuf;
	FILE *fh; 
	char *source;
	
	fh = fopen( filename, "r" );
	if ( fh == 0 )
		return 0;
	
	stat( filename, &statbuf );
	source = (char *)malloc( statbuf.st_size + 1 );
	fread( source, statbuf.st_size, 1, fh );
	source[ statbuf.st_size ] = '\0';
	
	fclose( fh );
	
	return source; 
}
 
cl_program _sclCreateProgram( char* program_source, cl_context context )
{
	cl_int err;
	
	cl_program program;
	program = clCreateProgramWithSource( context, 1, (const char**)&program_source, NULL, &err );
	if ( err!=CL_SUCCESS ) {
		printf( "Error on createProgram" );
		sclPrintErrorFlags( err );
	}
	
	return program;
}

void _sclBuildProgram( cl_program program, cl_device_id devices, const char* pName )
{
	cl_int err;
	char build_c[4096];
	
	err = clBuildProgram( program, 0, NULL, NULL, NULL, NULL );
   	if ( err != CL_SUCCESS ) {
		printf( "Error on buildProgram " );
		sclPrintErrorFlags( err ); 
		fprintf( stdout, "\nRequestingInfo\n" );
		clGetProgramBuildInfo( program, devices, CL_PROGRAM_BUILD_LOG, 4096, build_c, NULL );
		printf( "Build Log for %s_program:\n%s\n", pName, build_c );
	}
}

cl_kernel _sclCreateKernel( clSoft software ) {
	cl_kernel kernel;
	cl_int err;

	kernel = clCreateKernel( software.program, software.kernelName, &err );
	if ( err != CL_SUCCESS ) {
		printf( "Error on createKernel %s ", software.kernelName );
		sclPrintErrorFlags( err );
	}

	return kernel;
}

cl_event sclLaunchKernelWEvent( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size) {
	cl_int err;
	cl_event myEvent;	

	err = clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, &myEvent );
	if ( err != CL_SUCCESS ) {
		printf( "\nError on launchKernel %s", software.kernelName );
		sclPrintErrorFlags(err); }

	sclFinish( hardware );

	return myEvent;
		
}

void sclLaunchKernel( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size) {
	cl_int err;

	err = clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) {
		printf( "\nError on launchKernel " );
		sclPrintErrorFlags( err );
	}

	sclFinish( hardware );

}

cl_event sclEnqueueKernelWEvent( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size) {
	cl_int err;
	cl_event myEvent;	

	err = clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, &myEvent );
	if ( err != CL_SUCCESS ) {
		printf( "\nError on launchKernel " );
		sclPrintErrorFlags(err); }

	return myEvent;
		
}

void sclEnqueueKernel( clHard hardware, clSoft software, size_t *global_work_size, size_t *local_work_size) {
	cl_int err;

	err = clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) {
		printf( "\nError on launchKernel " );
		sclPrintErrorFlags( err );
	}

}

void sclReleaseClSoft( clSoft soft ) {
	clReleaseKernel( soft.kernel );
	clReleaseProgram( soft.program );
}

void sclReleaseClHard( clHard hardware ){
	clReleaseCommandQueue( hardware.queue );
	clReleaseContext( hardware.context );
}

void sclRetainClHard( clHard hardware ) {
	clRetainCommandQueue( hardware.queue );
	clRetainContext( hardware.context );
}

void sclReleaseAllHardware ( clHard* hardList, int found ) {
	int i;	

	for ( i = 0; i < found; ++i ) {
		sclReleaseClHard( hardList[i] );
	}
 
}

void sclRetainAllHardware ( clHard* hardList, int found ) {
	int i;	

	for ( i = 0; i < found; ++i ) {
		sclRetainClHard( hardList[i] );
	}
 
}

void sclPrintDeviceNamePlatforms( clHard* hardList, int found ) {
	int i;
	cl_char deviceName[1024];
	cl_char platformVendor[1024];
	cl_char platformName[1024];

	for ( i = 0; i < found; ++i ) {
		clGetPlatformInfo( hardList[i].platform, CL_PLATFORM_NAME, sizeof(cl_char)*1024, platformName, NULL );	
		clGetPlatformInfo( hardList[i].platform, CL_PLATFORM_VENDOR, sizeof(cl_char)*1024, platformVendor, NULL );
		clGetDeviceInfo( hardList[i].device, CL_DEVICE_NAME, sizeof(cl_char)*1024, deviceName, NULL );
		fprintf( stdout, "\n Device %d \n Platform name: %s \n Vendor: %s \n Device name: %s", i, platformName, platformVendor, deviceName );	
	}

}

void sclPrintHardwareStatus( clHard hardware ) {

	cl_int err;
	char platform[100];
	cl_bool deviceAV;

	err = clGetPlatformInfo( hardware.platform,
			CL_PLATFORM_NAME,
			sizeof(char)*100,
			platform,
			NULL );
	if ( err == CL_SUCCESS ) { fprintf( stdout, "\nPlatform object alive" ); }
	else { sclPrintErrorFlags( err ); }
	
	err = clGetDeviceInfo( hardware.device,
			CL_DEVICE_AVAILABLE,
			sizeof(cl_bool),
			(void*)(&deviceAV),
			NULL );
	if ( err == CL_SUCCESS && deviceAV ) {
		fprintf( stdout, "\nDevice object alive and device available." );
	}
	else if ( err == CL_SUCCESS ) {
		fprintf( stdout, "\nDevice object alive and device NOT available.");
	}
	else {
		fprintf( stdout, "\nDevice object not alive.");
	} 

}

void _sclCreateQueues( clHard* hardList, int found ) {

	int i;
	cl_int err;

	for ( i = 0; i < found; ++i ) {
		hardList[i].queue = clCreateCommandQueue( hardList[i].context, hardList[i].device,
							 CL_QUEUE_PROFILING_ENABLE, &err );
		if ( err != CL_SUCCESS ) {
			fprintf( stdout, "\nError creating command queue %d", i );
		}
	}
}

void _sclSmartCreateContexts( clHard* hardList, int found ) {

	cl_device_id deviceList[16];
	cl_context context;
	char var_queries1[1024];
	char var_queries2[1024];
	cl_int err;
	ptclHard groups[10][20];
	int i, j, groupSet = 0;
	int groupSizes[10];
	int nGroups = 0;


	for ( i = 0; i < found; ++i ) { /* Group generation */
	
		clGetPlatformInfo( hardList[i].platform, CL_PLATFORM_NAME, 1024, var_queries1, NULL );

		if (  nGroups == 0 ) {
			groups[0][0] = &(hardList[0]);
			nGroups++;
			groupSizes[0] = 1;
		}
		else {
			groupSet=0;
			for ( j = 0; j < nGroups; ++j ){
				clGetPlatformInfo( groups[j][0]->platform, CL_PLATFORM_NAME, 1024, var_queries2, NULL );
				if ( strcmp( var_queries1, var_queries2 ) == 0 &&
						hardList[i].deviceType == groups[j][0]->deviceType &&
						hardList[i].maxPointerSize == groups[j][0]->maxPointerSize ) {
					groups[j][ groupSizes[j] ] = &(hardList[i]);
					groupSizes[j]++;
					groupSet = 1;	
				}
			}
			if ( !groupSet ) {
				groups[nGroups][0] = &(hardList[i]);
				groupSizes[nGroups] = 1;
				nGroups++;
			}
		}
	}

	for ( i = 0; i < nGroups; ++i ) { /* Context generation */
	
		fprintf( stdout, "\nGroup %d with %d devices", i+1, groupSizes[i] );	
		for ( j = 0; j < groupSizes[i]; ++j ) {
			deviceList[j] = groups[i][j]->device;	
		}

		context = clCreateContext( 0, groupSizes[i], deviceList, NULL, NULL, &err );
		if ( err != CL_SUCCESS ) {
			fprintf( stdout, "\nError creating context on device %d", i );
		}

		for ( j = 0; j < groupSizes[i]; ++j ) {
			groups[i][j]->context = context;
		}
	}
}

int _sclGetMaxComputeUnits( cl_device_id device ) {
	
	cl_uint nCompU;

	clGetDeviceInfo( device, CL_DEVICE_MAX_COMPUTE_UNITS, 4, (void *)&nCompU, NULL );

	return (int)nCompU;	

}

unsigned long long int _sclGetMaxMemAllocSize( cl_device_id device ){

	cl_ulong mem;

 	clGetDeviceInfo( device, CL_DEVICE_MAX_MEM_ALLOC_SIZE, 8, (void *)&mem, NULL );

	return (unsigned long long int)mem;	

}

int _sclGetDeviceType( cl_device_id device ) {
	
	int out=2;
	char var_queries[1024];

 	clGetDeviceInfo( device, CL_DEVICE_TYPE, 1024, var_queries, NULL );
	
	if ( strcmp( var_queries, "CL_DEVICE_TYPE_GPU" ) == 0 ) {
		out = 0;
	}
	else if ( strcmp( var_queries, "CL_DEVICE_TYPE_CPU" ) == 0 ) {
		out = 1;
	}

	return out;

}

int sclGetFastestDevice( clHard* hardList, int found ) {
	int i, maxCpUnits = 0, device = 0;

	for ( i = 0; i < found ; ++i ) {
		fprintf( stdout, "\nDevice %d Compute Units %d", i, hardList[i].nComputeUnits );
		if ( maxCpUnits < hardList[i].nComputeUnits ) {
			device = i;
			maxCpUnits = hardList[i].nComputeUnits;
		}
	}

	return device;
}

int sclGetAllHardware( clHard** hardList ) {

	int i, j, found=0; 
	cl_uint nPlatforms=0, nDevices=0;
	char* platformName;
	
	cl_platform_id *GPUplatforms, *platforms;
	cl_int err;
	cl_device_id *devices;
	
	platforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	GPUplatforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	platformName = (char *)malloc( sizeof(char) * 30 );
	devices = (cl_device_id *)malloc( sizeof(cl_device_id) * 16 );
	*hardList = (clHard*)malloc( 16*sizeof(clHard) );

	err = clGetPlatformIDs( 8, platforms, &nPlatforms );
	
	if ( nPlatforms == 0 ) {
		printf("\nNo OpenCL plantforms found.\n");
	}
	else {
		for ( i = 0; i < (int)nPlatforms; ++i ) {
			err = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_ALL, 16, devices, &nDevices );
			if ( nDevices == 0 ) {
				printf("\nNo OpenCL enabled device found.");
				if ( err != CL_SUCCESS ) {
					printf( "\nError clGetDeviceIDs" );
					sclPrintErrorFlags( err );
				}
			}
			else {
				for ( j = 0; j < (int)nDevices; ++j ) {

					(*hardList)[ found ].platform	    = platforms[ i ];
					(*hardList)[ found ].device 	    = devices[ j ];
					(*hardList)[ found ].nComputeUnits  = _sclGetMaxComputeUnits( (*hardList)[ found ].device );
					(*hardList)[ found ].maxPointerSize = _sclGetMaxMemAllocSize( (*hardList)[ found ].device );				
					(*hardList)[ found ].deviceType	    = _sclGetDeviceType( (*hardList)[ found ].device );
					found++;
				}
			}
		}
		_sclSmartCreateContexts( *hardList, found );
		_sclCreateQueues( *hardList, found );
	}

	sclPrintDeviceNamePlatforms( *hardList, found );
	sclRetainAllHardware( *hardList, found );

	return found;

}

clHard sclGetGPUHardware( int nDevice, int* found ) {

	int i, nTotalDevs=0;
	int nGPUplatforms=0;
	cl_platform_id *GPUplatforms;
	clHard hardware;
	cl_int err;
	cl_uint nPlatforms, nDevices=0;
	cl_platform_id *platforms;
	cl_device_id *devices;
	size_t returned_size;
	cl_char vendor_name[1024];
	cl_char device_name[1024];
	char* platformName;

	*found = 1;
	platforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	GPUplatforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	platformName = (char *)malloc( sizeof(char) * 30 );
	devices = (cl_device_id *)malloc( sizeof(cl_device_id) * 8 );
	/*Get platform info ###################################################### */
	err = clGetPlatformIDs( 8, platforms, &nPlatforms );
	/*printf("\n Number of platforms found: %d \n",nPlatforms);*/
	/* ###################################################### */


	if ( nPlatforms == 0 ) {
		printf("\nNo OpenCL plantforms found.\n");
		*found = 0;
	}
	else if ( nPlatforms == 1 ) {
		hardware.platform = platforms[0];
		err = clGetDeviceIDs( hardware.platform, CL_DEVICE_TYPE_GPU, 8, devices, &nDevices );
		/*if ( err != CL_SUCCESS ) {
			printf( "\nError clGetDeviceIDs" );
			sclPrintErrorFlags( err ); }*/
		if ( nDevices == 0 ) {
			printf("\nNo OpenCL enabled GPU found.\n");
			*found = 0;
		}
	}
	else {
		for ( i = 0; i < (int)nPlatforms; ++i ) {
			err = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_GPU, 8, devices + nTotalDevs, &nDevices );
			/*if ( err != CL_SUCCESS ) {
				printf( "\nError clGetDeviceIDs" );
				sclPrintErrorFlags( err ); }*/
			nTotalDevs += (int)nDevices;	
			if ( nDevices > 0 ) {
				GPUplatforms[nGPUplatforms] = platforms[i];
				nGPUplatforms++; 
			}  
		}
		if ( nGPUplatforms == 0 ) {
			printf("\nNo OpenCL enabled GPU found.\n");
			*found = 0;
		}
		else if ( nGPUplatforms == 1 ) {
			hardware.platform = GPUplatforms[0];
			hardware.device = devices[nDevice];
		}
		else {
			err = clGetPlatformInfo( GPUplatforms[0], CL_PLATFORM_VENDOR, (size_t)30, (void *)platformName, NULL);
			if ( err != CL_SUCCESS ) {
				printf( "\nError clGetPlatformInfo" );
				sclPrintErrorFlags( err ); }
			/*printf( "\nMore than one OpenCL platform with enabled GPU's.\nUsing: %s\n", platformName );*/
			hardware.platform = GPUplatforms[0];
			hardware.device = devices[nDevice];
		}

	}

	/*printf("\nNumber of devices found: %d \n",nDevices);*/
	for ( i = 0; i < nTotalDevs; ++i ) {
		/*printf("\nDevice %d id: %d\n",i+1,(int)(devices[i]));*/
		if ( i == nDevice ) {
			returned_size = 0;

			vendor_name[0] = '\0';
			device_name[0] = '\0';

			err  = clGetDeviceInfo( devices[i], CL_DEVICE_VENDOR, sizeof(vendor_name), vendor_name, &returned_size );
			err |= clGetDeviceInfo( devices[i], CL_DEVICE_NAME, sizeof(device_name), device_name, &returned_size );

			if ( err != CL_SUCCESS ) {
				printf( "\nError 2" );
				sclPrintErrorFlags( err ); }

			printf("\nUsing device vendor: %s\nDevice name: %s\n",vendor_name,device_name);
		}
	}
	if ( *found ) {
		/* Create context ########################################################### */
		hardware.device = devices[nDevice];
		hardware.context = clCreateContext( 0, 1, &hardware.device, NULL, NULL, &err );
		if ( err != CL_SUCCESS) {
			printf( "\nError 3" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */

		/* Create command queue ########################################################### */	
		hardware.queue = clCreateCommandQueue( hardware.context, hardware.device, CL_QUEUE_PROFILING_ENABLE, &err );
		if ( err != CL_SUCCESS ) {
			printf( "\nError 3.1" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */	

	}
	free(platforms);
	free(GPUplatforms);
	free(platformName);
	free(devices);

	return hardware;
}

clHard sclGetCPUHardware( int nDevice, int* found ) {

	int i,nTotalDevs=0;
	int nCPUplatforms=0;
	cl_platform_id *CPUplatforms;
	clHard hardware;
	cl_int err;
	cl_uint nPlatforms, nDevices=0;
	cl_platform_id *platforms;
	cl_device_id *devices;
	size_t returned_size;
	cl_char vendor_name[1024];
	cl_char device_name[1024];
	char* platformName;

	*found = 1;
	platforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	CPUplatforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	platformName = (char *)malloc( sizeof(char) * 30 );
	devices = (cl_device_id *)malloc( sizeof(cl_device_id) * 8 );
	/*Get platform info ###################################################### */
	err = clGetPlatformIDs( 8, platforms, &nPlatforms );
	/*printf("\n Number of platforms found: %d \n",nPlatforms);*/
	/* ###################################################### */


	if ( nPlatforms == 0 ) {
		printf("\nNo OpenCL plantforms found.\n");
		*found = 0;
	}
	else if ( nPlatforms == 1 ) {
		hardware.platform = platforms[0];
		err = clGetDeviceIDs( hardware.platform, CL_DEVICE_TYPE_CPU, 8, devices, &nDevices );
		if ( err != CL_SUCCESS ) {
			printf( "\nError clGetDeviceIDs" );
			sclPrintErrorFlags( err ); }
		if ( nDevices == 0 ) {
			printf("\nNo OpenCL enabled CPU found.\n");
			*found = 0;
		}
	}
	else {
		for ( i = 0; i < (int)nPlatforms; ++i ) {
			err = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_CPU, 8, devices + nTotalDevs, &nDevices );
			/*if ( err != CL_SUCCESS ) {
				printf( "\nError clGetDeviceIDs" );
				sclPrintErrorFlags( err ); }*/
			nTotalDevs += (int)nDevices;	
			if ( nDevices > 0 ) {
				CPUplatforms[nCPUplatforms] = platforms[i];
				nCPUplatforms++; 
			}  
		}
		if ( nCPUplatforms == 0 ) {
			printf("\nNo OpenCL enabled CPU found.\n");
			*found = 0;
		}
		else if ( nCPUplatforms == 1 ) {
			hardware.platform = CPUplatforms[0];
			hardware.device = devices[nDevice];
		}
		else {
			err = clGetPlatformInfo ( CPUplatforms[0], CL_PLATFORM_VENDOR, (size_t)30, (void *)platformName, NULL);
			if ( err != CL_SUCCESS ) {
				printf( "\nError clGetPlatformInfo" );
				sclPrintErrorFlags( err ); }
			printf( "\nMore than one OpenCL platform with enabled CPU's.\nUsing: %s", platformName );
			hardware.platform = CPUplatforms[0];
			hardware.device = devices[nDevice];
		}

	}

	/*printf("\nNumber of devices found: %d \n",nDevices);*/
	for ( i = 0; i < (int)nTotalDevs; ++i ) {
		/*printf("\nDevice %d id: %d\n",i+1,(int)(devices[i]));*/
		if ( i == nDevice ) {
			returned_size = 0;

			vendor_name[0] = '\0';
			device_name[0] = '\0';

			err  = clGetDeviceInfo( devices[i], CL_DEVICE_VENDOR, sizeof(vendor_name), vendor_name, &returned_size );
			err |= clGetDeviceInfo( devices[i], CL_DEVICE_NAME, sizeof(device_name), device_name, &returned_size );

			if ( err != CL_SUCCESS ) {
				printf( "\nError 2" );
				sclPrintErrorFlags( err ); }

			printf("\nUsing device vendor: %s\nDevice name: %s\n",vendor_name,device_name);
		}
	}
	if ( *found ) {
		/* Create context ########################################################### */
		hardware.device = devices[nDevice];
		hardware.context = clCreateContext( 0, 1, &hardware.device, NULL, NULL, &err );
		if ( err != CL_SUCCESS) {
			printf( "\nError 3" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */

		/* Create command queue ########################################################### */	
		hardware.queue = clCreateCommandQueue( hardware.context, hardware.device, CL_QUEUE_PROFILING_ENABLE, &err );
		if ( err != CL_SUCCESS ) {
			printf( "\nError 3.1" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */	

	}
	free(platforms);
	free(CPUplatforms);
	free(platformName);
	free(devices);

	return hardware;
}

clSoft sclGetCLSoftware( char* path, char* name, clHard hardware ){
	clSoft software;
	
	sprintf( software.kernelName, "%s", name);
	
	/* Load program source
	 ########################################################### */
	char *source = _sclLoadProgramSource( path );
	/* ########################################################### */
	
	/* Create program objects from source
	 ########################################################### */
	software.program = _sclCreateProgram( source, hardware.context );
	/* ########################################################### */
	
	/* Build the program (compile it)
   	 ############################################ */
   	_sclBuildProgram( software.program, hardware.device, name );
   	/* ############################################ */
   	
   	/* Create the kernel object
	 ########################################################################## */
	software.kernel = _sclCreateKernel( software );
	/* ########################################################################## */

	return software;
	
}

cl_mem sclMalloc( clHard hardware, cl_int mode, size_t size ){
	cl_int err;
	
	cl_mem buffer = clCreateBuffer( hardware.context, mode, size, NULL, &err );
	if ( err != CL_SUCCESS ) {
		printf( "\nclMalloc Error\n" );
		sclPrintErrorFlags( err );
	}
		
	return buffer;
}	

cl_mem sclMallocWrite( clHard hardware, cl_int mode, size_t size, void* hostPointer ){

	cl_int err;
    
        cl_mem buffer = clCreateBuffer( hardware.context, mode, size, NULL, &err );
        if ( err != CL_SUCCESS ) { 
		printf( "\nclMallocWrite Error on clCreateBuffer\n" );
		sclPrintErrorFlags( err );
	}

	err = clEnqueueWriteBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) { 
		printf( "\nclMallocWrite Error on clEnqueueWriteBuffer\n" );
		sclPrintErrorFlags( err );
	}   

	return buffer;
}

void sclWrite( clHard hardware, size_t size, cl_mem buffer, void* hostPointer ) {

	cl_int err;

	err = clEnqueueWriteBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) { 
		printf( "\nclWrite Error\n" );
		sclPrintErrorFlags( err );
	}   

}

void sclRead( clHard hardware, size_t size, cl_mem buffer, void *hostPointer ) {
	cl_int err;

	err = clRetainCommandQueue( hardware.queue );
	if ( err != CL_SUCCESS ) {
		printf( "\nclRetainCommandQueue Error\n" );
		sclPrintErrorFlags( err );
       	}

	err = clEnqueueReadBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) {
		printf( "\nclRead Error\n" );
		sclPrintErrorFlags( err );
       	}
}

cl_int sclFinish( clHard hardware ){

	cl_int err;

	err = clFinish( hardware.queue );
	if ( err != CL_SUCCESS ) {
		printf( "\nError clFinish\n" );
		sclPrintErrorFlags( err );
	}

	return err;

}

cl_ulong sclGetEventTime( clHard hardware, cl_event event ){

	cl_ulong elapsedTime, startTime, endTime;

	sclFinish( hardware );

	clGetEventProfilingInfo( event, CL_PROFILING_COMMAND_START, sizeof(cl_ulong), &startTime, NULL);
	clGetEventProfilingInfo( event, CL_PROFILING_COMMAND_END, sizeof(cl_ulong), &endTime, NULL);

	elapsedTime = endTime-startTime;

	return elapsedTime;
}

void sclSetKernelArg( clSoft software, int argnum, size_t typeSize, void *argument ){

	cl_int err;

	err = clSetKernelArg( software.kernel, argnum, typeSize, argument );
	if ( err != CL_SUCCESS ) {	
		printf( "\nError clSetKernelArg number %d\n", argnum );
		sclPrintErrorFlags( err );
	}

}

#ifdef __cplusplus
}
#endif
