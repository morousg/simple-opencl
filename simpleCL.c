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
    along with SimpleOpenCL. If not, see <http://www.gnu.org/licenses/>.

   ####################################################################### 

   SimpleOpenCL Version 0.010_27_02_2013 

*/

#ifdef __cplusplus
extern "C" {
#endif

#include "simpleCL.h"

void sclPrintErrorFlags( cl_int flag ){
    
	switch (flag){

		case CL_DEVICE_NOT_FOUND:
			fprintf( stderr, "\nCL_DEVICE_NOT_FOUND\n");
			break;
		case CL_DEVICE_NOT_AVAILABLE:
			fprintf( stderr, "\nCL_DEVICE_NOT_AVAILABLE\n");
			break;
		case CL_COMPILER_NOT_AVAILABLE:
			fprintf( stderr, "\nCL_COMPILER_NOT_AVAILABLE\n");
			break;
		case CL_PROFILING_INFO_NOT_AVAILABLE:
			fprintf( stderr, "\nCL_PROFILING_INFO_NOT_AVAILABLE\n");
			break;
		case CL_MEM_COPY_OVERLAP:
			fprintf( stderr, "\nCL_MEM_COPY_OVERLAP\n");
			break;
		case CL_IMAGE_FORMAT_MISMATCH:
			fprintf( stderr, "\nCL_IMAGE_FORMAT_MISMATCH\n");
			break;
		case CL_IMAGE_FORMAT_NOT_SUPPORTED:
			fprintf( stderr, "\nCL_IMAGE_FORMAT_NOT_SUPPORTED\n");
			break;
		case CL_INVALID_COMMAND_QUEUE:
			fprintf( stderr, "\nCL_INVALID_COMMAND_QUEUE\n");
			break;
		case CL_INVALID_CONTEXT:
			fprintf( stderr, "\nCL_INVALID_CONTEXT\n");
			break;
		case CL_INVALID_MEM_OBJECT:
			fprintf( stderr, "\nCL_INVALID_MEM_OBJECT\n");
			break;
		case CL_INVALID_VALUE:
			fprintf( stderr, "\nCL_INVALID_VALUE\n");
			break;
		case CL_INVALID_EVENT_WAIT_LIST:
			fprintf( stderr, "\nCL_INVALID_EVENT_WAIT_LIST\n");
			break;
		case CL_MEM_OBJECT_ALLOCATION_FAILURE:
			fprintf( stderr, "\nCL_MEM_OBJECT_ALLOCATION_FAILURE\n");
			break;
		case CL_OUT_OF_HOST_MEMORY:
			fprintf( stderr, "\nCL_OUT_OF_HOST_MEMORY\n");
			break;

		case CL_INVALID_PROGRAM_EXECUTABLE:
			fprintf( stderr, "\nCL_INVALID_PROGRAM_EXECUTABLE\n");
			break;
		case CL_INVALID_KERNEL:
			fprintf( stderr, "\nCL_INVALID_KERNEL\n");
			break;
		case CL_INVALID_KERNEL_ARGS:
			fprintf( stderr, "\nCL_INVALID_KERNEL_ARGS\n");
			break;
		case CL_INVALID_WORK_DIMENSION:
			fprintf( stderr, "\nCL_INVALID_WORK_DIMENSION\n");
			break;
#ifndef __APPLE__ 
		case CL_INVALID_GLOBAL_WORK_SIZE:
			fprintf( stderr, "\nCL_INVALID_GLOBAL_WORK_SIZE\n");
			break;
#endif
		case CL_INVALID_WORK_GROUP_SIZE:
			fprintf( stderr, "\nCL_INVALID_WORK_GROUP_SIZE\n");
			break;
		case CL_INVALID_WORK_ITEM_SIZE:
			fprintf( stderr, "\nCL_INVALID_WORK_ITEM_SIZE\n");
			break;
		case CL_INVALID_GLOBAL_OFFSET:
			fprintf( stderr, "\nCL_INVALID_GLOBAL_OFFSET\n");
			break;
		case CL_OUT_OF_RESOURCES:
			fprintf( stderr, "\nCL_OUT_OF_RESOURCES\n");
			break;

		case CL_INVALID_PROGRAM:
			fprintf( stderr, "\nCL_INVALID_PROGRAM\n");
			break;
		case CL_INVALID_KERNEL_NAME:
			fprintf( stderr, "\nCL_INVALID_KERNEL_NAME\n");
			break;
		case CL_INVALID_KERNEL_DEFINITION:
			fprintf( stderr, "\nCL_INVALID_KERNEL_DEFINITION\n");
			break;
		case CL_INVALID_BUFFER_SIZE:
			fprintf( stderr, "\nCL_INVALID_BUFFER_SIZE\n");
			break;
		case CL_BUILD_PROGRAM_FAILURE:
			fprintf( stderr, "\nCL_BUILD_PROGRAM_FAILURE\n");
			break;
		case CL_INVALID_ARG_INDEX:
			fprintf( stderr, "\nCL_INVALID_ARG_INDEX\n");
			break;
		case CL_INVALID_ARG_VALUE:
			fprintf( stderr, "\nCL_INVALID_ARG_VALUE\n");
			break;
		case CL_MAP_FAILURE:
			fprintf( stderr, "\nCL_MAP_FAILURE\n");
			break;
		case CL_MISALIGNED_SUB_BUFFER_OFFSET:
			fprintf( stderr, "\nCL_MISALIGNED_SUB_BUFFER_OFFSET\n");
			break;
		case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
			fprintf( stderr, "\nCL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST\n");
			break;
		case CL_INVALID_DEVICE_TYPE:
			fprintf( stderr, "\nCL_INVALID_DEVICE_TYPE\n");
			break;
		case CL_INVALID_PLATFORM:
			fprintf( stderr, "\nCL_INVALID_PLATFORM\n");
			break;
		case CL_INVALID_DEVICE:
			fprintf( stderr, "\nCL_INVALID_DEVICE\n");
			break; 
		case CL_INVALID_QUEUE_PROPERTIES:
			fprintf( stderr, "\nCL_INVALID_QUEUE_PROPERTIES\n");
			break; 
		case CL_INVALID_HOST_PTR:
			fprintf( stderr, "\nCL_INVALID_HOST_PTR\n");
			break;
		case CL_INVALID_IMAGE_FORMAT_DESCRIPTOR:
			fprintf( stderr, "\nCL_INVALID_IMAGE_FORMAT_DESCRIPTOR\n");
			break;
		case CL_INVALID_IMAGE_SIZE:
			fprintf( stderr, "\nCL_INVALID_IMAGE_SIZE\n");
			break;
		case CL_INVALID_SAMPLER:
			fprintf( stderr, "\nCL_INVALID_SAMPLER\n");
			break;
		case CL_INVALID_BINARY:
			fprintf( stderr, "\nCL_INVALID_BINARY\n");
			break;
		case CL_INVALID_BUILD_OPTIONS:
			fprintf( stderr, "\nCL_INVALID_BUILD_OPTIONS\n");
			break;
		case CL_INVALID_ARG_SIZE:
			fprintf( stderr, "\nCL_INVALID_ARG_SIZE\n");
			break;
		case CL_INVALID_EVENT:
			fprintf( stderr, "\nCL_INVALID_EVENT\n");
			break;
		case CL_INVALID_OPERATION:
			fprintf( stderr, "\nCL_INVALID_OPERATION\n");
			break;
		case CL_INVALID_GL_OBJECT:
			fprintf( stderr, "\nCL_INVALID_GL_OBJECT\n");
			break;
		case CL_INVALID_MIP_LEVEL:
			fprintf( stderr, "\nCL_INVALID_MIP_LEVEL\n");
			break;
		case CL_INVALID_PROPERTY:
			fprintf( stderr, "\nCL_INVALID_PROPERTY\n");
			break;
		default:
			fprintf( stderr, "\nUnknown error code: %d\n",flag);    
	}
}

char* _sclLoadProgramSource( const char *filename )
{ 
	struct stat statbuf;
	FILE *fh; 
	char *source;
	
	fh = fopen( filename, "r" );
	if ( fh == NULL ){
		fprintf( stderr, "Error on loadProgramSource");
		sclPrintErrorFlags( CL_INVALID_PROGRAM );
		return 0;
	}
	
	stat( filename, &statbuf );
	source = (char *)malloc( statbuf.st_size + 1 );

	if( fread( source, statbuf.st_size, 1, fh ) != 1 ) {
		fprintf( stderr, "Error on loadProgramSource");
		sclPrintErrorFlags( CL_INVALID_PROGRAM );
	}

	source[ statbuf.st_size ] = '\0';
	
	fclose( fh );
	
	return source; 
}
 
cl_program _sclCreateProgram( char* program_source, cl_context context )
{
	cl_program program;
#ifdef DEBUG
	cl_int err;
	
	program = clCreateProgramWithSource( context, 1, (const char**)&program_source, NULL, &err );
	if ( err!=CL_SUCCESS ) {
		fprintf( stderr,  "Error on createProgram" );
		sclPrintErrorFlags( err );
	}
#else
	program = clCreateProgramWithSource( context, 1, (const char**)&program_source, NULL, NULL );
#endif
	
	return program;
}

void _sclBuildProgram( cl_program program, cl_device_id devices, const char* pName )
{
#ifdef DEBUG
	cl_int err;
	char build_c[4096];
	
	err = clBuildProgram( program, 0, NULL, NULL, NULL, NULL );
   	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "Error on buildProgram " );
		sclPrintErrorFlags( err ); 
		fprintf( stderr,  "\nRequestingInfo\n" );
		clGetProgramBuildInfo( program, devices, CL_PROGRAM_BUILD_LOG, 4096, build_c, NULL );
		fprintf( stderr,  "Build Log for %s_program:\n%s\n", pName, build_c );
	}
#else
	clBuildProgram( program, 0, NULL, NULL, NULL, NULL );
#endif

}

cl_kernel _sclCreateKernel( sclSoft software ) {
	cl_kernel kernel;
#ifdef DEBUG
	cl_int err;

	kernel = clCreateKernel( software.program, software.kernelName, &err );
	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "Error on createKernel %s ", software.kernelName );
		sclPrintErrorFlags( err );
	}
#else
	kernel = clCreateKernel( software.program, software.kernelName, NULL );
#endif

	return kernel;
}

cl_event sclLaunchKernel( sclHard hardware, sclSoft software, size_t *global_work_size, size_t *local_work_size) {
	cl_event myEvent=NULL;	
#ifdef DEBUG
	cl_int err;

	err = clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, &myEvent );
	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "\nError on launchKernel %s", software.kernelName );
		sclPrintErrorFlags(err); }
#else
	clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, NULL );
#endif
	sclFinish( hardware );
	return myEvent;
}

cl_event sclEnqueueKernel( sclHard hardware, sclSoft software, size_t *global_work_size, size_t *local_work_size) {
	cl_event myEvent=NULL;	
#ifdef DEBUG
	cl_int err;

	err = clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, &myEvent );
	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "\nError on launchKernel %s", software.kernelName );
		sclPrintErrorFlags(err); }
#else
	clEnqueueNDRangeKernel( hardware.queue, software.kernel, 2, NULL, global_work_size, local_work_size, 0, NULL, NULL );
#endif

	return myEvent;
		
}

void sclReleaseClSoft( sclSoft soft ) {
	clReleaseKernel( soft.kernel );
	clReleaseProgram( soft.program );
}

void sclReleaseClHard( sclHard hardware ){
	clReleaseCommandQueue( hardware.queue );
	clReleaseContext( hardware.context );
}

void sclRetainClHard( sclHard hardware ) {
	clRetainCommandQueue( hardware.queue );
	clRetainContext( hardware.context );
}

void sclReleaseAllHardware ( sclHard* hardList, int found ) {
	int i;	

	for ( i = 0; i < found; ++i ) {
		sclReleaseClHard( hardList[i] );
	}
 
}

void sclRetainAllHardware ( sclHard* hardList, int found ) {
	int i;	

	for ( i = 0; i < found; ++i ) {
		sclRetainClHard( hardList[i] );
	}
 
}

void sclReleaseMemObject( cl_mem object ) {
	cl_int err;

	err = clReleaseMemObject( object );
	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "\nError on sclReleaseMemObject" );
		sclPrintErrorFlags(err); 
	}	

}

void sclPrintDeviceNamePlatforms( sclHard* hardList, int found ) {
	int i;
	cl_char deviceName[1024];
	cl_char platformVendor[1024];
	cl_char platformName[1024];

	for ( i = 0; i < found; ++i ) {
		clGetPlatformInfo( hardList[i].platform, CL_PLATFORM_NAME, sizeof(cl_char)*1024, platformName, NULL );	
		clGetPlatformInfo( hardList[i].platform, CL_PLATFORM_VENDOR, sizeof(cl_char)*1024, platformVendor, NULL );
		clGetDeviceInfo( hardList[i].device, CL_DEVICE_NAME, sizeof(cl_char)*1024, deviceName, NULL );
		fprintf( stdout, "\n Device %d \n Platform name: %s \n Vendor: %s \n Device name: %s", 
				hardList[i].devNum, platformName, platformVendor, deviceName );	
	}

}

void sclPrintHardwareStatus( sclHard hardware ) {

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
		fprintf( stderr, "\nDevice object not alive.");
	} 

}

void _sclCreateQueues( sclHard* hardList, int found ) {

	int i;
#ifdef DEBUG
	cl_int err;

	for ( i = 0; i < found; ++i ) {
		hardList[i].queue = clCreateCommandQueue( hardList[i].context, hardList[i].device,
							 CL_QUEUE_PROFILING_ENABLE, &err );
		if ( err != CL_SUCCESS ) {
			fprintf( stderr, "\nError creating command queue %d", i );
		}
	}
#else
	for ( i = 0; i < found; ++i ) {
		hardList[i].queue = 
		clCreateCommandQueue( hardList[i].context, hardList[i].device, NULL, NULL );
	}
#endif

}

void _sclSmartCreateContexts( sclHard* hardList, int found ) {

	cl_device_id deviceList[16];
	cl_context context;
	char var_queries1[1024];
	char var_queries2[1024];
#ifdef DEBUG
	cl_int err;
#endif
	ptsclHard groups[10][20];
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
#ifdef DEBUG
		context = clCreateContext( 0, groupSizes[i], deviceList, NULL, NULL, &err );
		if ( err != CL_SUCCESS ) {
			fprintf( stderr, "\nError creating context on device %d", i );
		}
#else
		context = clCreateContext( 0, groupSizes[i], deviceList, NULL, NULL, NULL );
#endif
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

unsigned long int _sclGetMaxMemAllocSize( cl_device_id device ){

	cl_ulong mem;

 	clGetDeviceInfo( device, CL_DEVICE_MAX_MEM_ALLOC_SIZE, 8, (void *)&mem, NULL );

	return (unsigned long int)mem;	

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

sclHard sclGetFastestDevice( sclHard* hardList, int found ) {
	int i, maxCpUnits = 0, device = 0;

	for ( i = 0; i < found ; ++i ) {
		fprintf( stdout, "\nDevice %d Compute Units %d", i, hardList[i].nComputeUnits );
		if ( maxCpUnits < hardList[i].nComputeUnits ) {
			device = i;
			maxCpUnits = hardList[i].nComputeUnits;
		}
	}

	return hardList[ device ];
}

sclHard* sclGetAllHardware( int* found ) {

	int i, j; 
	cl_uint nPlatforms=0, nDevices=0;
	char* platformName;
	sclHard* hardList;
	
	*found=0;

	cl_platform_id *GPUplatforms, *platforms;
	cl_int err;
	cl_device_id *devices;
	
	platforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	GPUplatforms = (cl_platform_id *)malloc( sizeof(cl_platform_id) * 8 );
	platformName = (char *)malloc( sizeof(char) * 30 );
	devices = (cl_device_id *)malloc( sizeof(cl_device_id) * 16 );
	hardList = (sclHard*)malloc( 16*sizeof(sclHard) );

	err = clGetPlatformIDs( 8, platforms, &nPlatforms );
	if ( nPlatforms == 0 ) {
		fprintf( stderr, "\nNo OpenCL platforms found.\n");
	}
	else {
		
		for ( i = 0; i < (int)nPlatforms; ++i ) {
			err = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_ALL, 16, devices, &nDevices );
			if ( nDevices == 0 ) {
				fprintf( stderr, "\nNo OpenCL enabled device found.");
				if ( err != CL_SUCCESS ) {
					fprintf( stderr,  "\nError clGetDeviceIDs" );
					sclPrintErrorFlags( err );
				}
			}
			else {
				for ( j = 0; j < (int)nDevices; ++j ) {
					
					hardList[ *found ].platform       = platforms[ i ];
					hardList[ *found ].device         = devices[ j ];
					hardList[ *found ].nComputeUnits  = _sclGetMaxComputeUnits( hardList[ *found ].device );
					hardList[ *found ].maxPointerSize = _sclGetMaxMemAllocSize( hardList[ *found ].device );				
					hardList[ *found ].deviceType     = _sclGetDeviceType( hardList[ *found ].device );
					hardList[ *found ].devNum         = *found;
					(*found)++;
				}
			}
		}
		_sclSmartCreateContexts( hardList, *found );
		_sclCreateQueues( hardList, *found );
	}
#ifdef DEBUG
	sclPrintDeviceNamePlatforms( hardList, *found );
#endif
	sclRetainAllHardware( hardList, *found );
	
	return hardList;

}

sclHard sclGetGPUHardware( int nDevice, int* found ) {

	int i, nTotalDevs=0;
	int nGPUplatforms=0;
	cl_platform_id *GPUplatforms;
	sclHard hardware;
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
	/*fprintf( stdout, "\n Number of platforms found: %d \n",nPlatforms);*/
	/* ###################################################### */


	if ( nPlatforms == 0 ) {
		fprintf( stderr, "\nNo OpenCL platforms found.\n");
		*found = 0;
	}
	else if ( nPlatforms == 1 ) {
		hardware.platform = platforms[0];
		err = clGetDeviceIDs( hardware.platform, CL_DEVICE_TYPE_GPU, 8, devices, &nDevices );
		/*if ( err != CL_SUCCESS ) {
			fprintf( stderr,  "\nError clGetDeviceIDs" );
			sclPrintErrorFlags( err ); }*/
		if ( nDevices == 0 ) {
			fprintf( stderr, "\nNo OpenCL enabled GPU found.\n");
			*found = 0;
		}
	}
	else {
		for ( i = 0; i < (int)nPlatforms; ++i ) {
			err = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_GPU, 8, devices + nTotalDevs, &nDevices );
			/*if ( err != CL_SUCCESS ) {
				fprintf( stderr,  "\nError clGetDeviceIDs" );
				sclPrintErrorFlags( err ); }*/
			nTotalDevs += (int)nDevices;	
			if ( nDevices > 0 ) {
				GPUplatforms[nGPUplatforms] = platforms[i];
				nGPUplatforms++; 
			}  
		}
		if ( nGPUplatforms == 0 ) {
			fprintf( stderr, "\nNo OpenCL enabled GPU found.\n");
			*found = 0;
		}
		else if ( nGPUplatforms == 1 ) {
			hardware.platform = GPUplatforms[0];
			hardware.device = devices[nDevice];
		}
		else {
			err = clGetPlatformInfo( GPUplatforms[0], CL_PLATFORM_VENDOR, (size_t)30, (void *)platformName, NULL);
			if ( err != CL_SUCCESS ) {
				fprintf( stderr,  "\nError clGetPlatformInfo" );
				sclPrintErrorFlags( err ); }
			/*fprintf( stderr,  "\nMore than one OpenCL platform with enabled GPU's.\nUsing: %s\n", platformName );*/
			hardware.platform = GPUplatforms[0];
			hardware.device = devices[nDevice];
		}

	}

	/*fprintf( stdout, "\nNumber of devices found: %d \n",nDevices);*/
	for ( i = 0; i < nTotalDevs; ++i ) {
		/*fprintf( stdout, "\nDevice %d id: %d\n",i+1,(int)(devices[i]));*/
		if ( i == nDevice ) {
			returned_size = 0;

			vendor_name[0] = '\0';
			device_name[0] = '\0';

			err  = clGetDeviceInfo( devices[i], CL_DEVICE_VENDOR, sizeof(vendor_name), vendor_name, &returned_size );
			err |= clGetDeviceInfo( devices[i], CL_DEVICE_NAME, sizeof(device_name), device_name, &returned_size );

			if ( err != CL_SUCCESS ) {
				fprintf( stderr,  "\nError 2" );
				sclPrintErrorFlags( err ); }

			fprintf( stdout, "\nUsing device vendor: %s\nDevice name: %s\n",vendor_name,device_name);
		}
	}
	if ( *found ) {
		/* Create context ########################################################### */
		hardware.device = devices[nDevice];
		hardware.context = clCreateContext( 0, 1, &hardware.device, NULL, NULL, &err );
		if ( err != CL_SUCCESS) {
			fprintf( stderr,  "\nError 3" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */

		/* Create command queue ########################################################### */	
		hardware.queue = clCreateCommandQueue( hardware.context, hardware.device, CL_QUEUE_PROFILING_ENABLE, &err );
		if ( err != CL_SUCCESS ) {
			fprintf( stderr,  "\nError 3.1" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */	

	}
	free(platforms);
	free(GPUplatforms);
	free(platformName);
	free(devices);

	return hardware;
}

sclHard sclGetCPUHardware( int nDevice, int* found ) {

	int i,nTotalDevs=0;
	int nCPUplatforms=0;
	cl_platform_id *CPUplatforms;
	sclHard hardware;
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
	/*fprintf( stdout, "\n Number of platforms found: %d \n",nPlatforms);*/
	/* ###################################################### */


	if ( nPlatforms == 0 ) {
		fprintf( stderr, "\nNo OpenCL platforms found.\n");
		*found = 0;
	}
	else if ( nPlatforms == 1 ) {
		hardware.platform = platforms[0];
		err = clGetDeviceIDs( hardware.platform, CL_DEVICE_TYPE_CPU, 8, devices, &nDevices );
		if ( err != CL_SUCCESS ) {
			fprintf( stderr,  "\nError clGetDeviceIDs" );
			sclPrintErrorFlags( err ); }
		if ( nDevices == 0 ) {
			fprintf( stderr, "\nNo OpenCL enabled CPU found.\n");
			*found = 0;
		}
	}
	else {
		for ( i = 0; i < (int)nPlatforms; ++i ) {
			err = clGetDeviceIDs( platforms[i], CL_DEVICE_TYPE_CPU, 8, devices + nTotalDevs, &nDevices );
			/*if ( err != CL_SUCCESS ) {
				fprintf( stderr,  "\nError clGetDeviceIDs" );
				sclPrintErrorFlags( err ); }*/
			nTotalDevs += (int)nDevices;	
			if ( nDevices > 0 ) {
				CPUplatforms[nCPUplatforms] = platforms[i];
				nCPUplatforms++; 
			}  
		}
		if ( nCPUplatforms == 0 ) {
			fprintf( stderr, "\nNo OpenCL enabled CPU found.\n");
			*found = 0;
		}
		else if ( nCPUplatforms == 1 ) {
			hardware.platform = CPUplatforms[0];
			hardware.device = devices[nDevice];
		}
		else {
			err = clGetPlatformInfo ( CPUplatforms[0], CL_PLATFORM_VENDOR, (size_t)30, (void *)platformName, NULL);
			if ( err != CL_SUCCESS ) {
				fprintf( stderr,  "\nError clGetPlatformInfo" );
				sclPrintErrorFlags( err ); }
			fprintf( stdout, "\nMore than one OpenCL platform with enabled CPU's.\nUsing: %s", platformName );
			hardware.platform = CPUplatforms[0];
			hardware.device = devices[nDevice];
		}

	}

	/*fprintf( stdout, "\nNumber of devices found: %d \n",nDevices);*/
	for ( i = 0; i < (int)nTotalDevs; ++i ) {
		/*fprintf( stdout, "\nDevice %d id: %d\n",i+1,(int)(devices[i]));*/
		if ( i == nDevice ) {
			returned_size = 0;

			vendor_name[0] = '\0';
			device_name[0] = '\0';

			err  = clGetDeviceInfo( devices[i], CL_DEVICE_VENDOR, sizeof(vendor_name), vendor_name, &returned_size );
			err |= clGetDeviceInfo( devices[i], CL_DEVICE_NAME, sizeof(device_name), device_name, &returned_size );

			if ( err != CL_SUCCESS ) {
				fprintf( stderr,  "\nError 2" );
				sclPrintErrorFlags( err ); }

			fprintf( stdout, "\nUsing device vendor: %s\nDevice name: %s\n",vendor_name,device_name);
		}
	}
	if ( *found ) {
		/* Create context ########################################################### */
		hardware.device = devices[nDevice];
		hardware.context = clCreateContext( 0, 1, &hardware.device, NULL, NULL, &err );
		if ( err != CL_SUCCESS) {
			fprintf( stderr,  "\nError 3" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */

		/* Create command queue ########################################################### */	
		hardware.queue = clCreateCommandQueue( hardware.context, hardware.device, CL_QUEUE_PROFILING_ENABLE, &err );
		if ( err != CL_SUCCESS ) {
			fprintf( stderr,  "\nError 3.1" );
			sclPrintErrorFlags( err ); }
		/* ########################################################### */	

	}
	free(platforms);
	free(CPUplatforms);
	free(platformName);
	free(devices);

	return hardware;
}

sclSoft sclGetCLSoftware( char* path, char* name, sclHard hardware ){
	sclSoft software;
	/* Load program source
	 ########################################################### */
	char *source = _sclLoadProgramSource( path );
	/* ########################################################### */
	
	sprintf( software.kernelName, "%s", name);
	
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

cl_mem sclMalloc( sclHard hardware, cl_int mode, size_t size ){
	cl_mem buffer;
#ifdef DEBUG
	cl_int err;
	
	buffer = clCreateBuffer( hardware.context, mode, size, NULL, &err );
	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "\nclMalloc Error\n" );
		sclPrintErrorFlags( err );
	}
#else
	buffer = clCreateBuffer( hardware.context, mode, size, NULL, NULL );
#endif
		
	return buffer;
}	

cl_mem sclMallocWrite( sclHard hardware, cl_int mode, size_t size, void* hostPointer ){
	cl_mem buffer;

	buffer = sclMalloc( hardware, mode, size );

#ifdef DEBUG
	cl_int err;
	
	if ( buffer == NULL ) { 
		fprintf( stderr,  "\nclMallocWrite Error on clCreateBuffer\n" );
	}
	err = clEnqueueWriteBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) { 
		fprintf( stderr,  "\nclMallocWrite Error on clEnqueueWriteBuffer\n" );
		sclPrintErrorFlags( err );
	}

#else
	clEnqueueWriteBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
#endif
	return buffer;
}

void sclWrite( sclHard hardware, size_t size, cl_mem buffer, void* hostPointer ) {
#ifdef DEBUG
	cl_int err;

	err = clEnqueueWriteBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) { 
		fprintf( stderr,  "\nclWrite Error\n" );
		sclPrintErrorFlags( err );
	}   
#else
	clEnqueueWriteBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
#endif
}

void sclRead( sclHard hardware, size_t size, cl_mem buffer, void *hostPointer ) {
#ifdef DEBUG
	cl_int err;

	err = clEnqueueReadBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "\nclRead Error\n" );
		sclPrintErrorFlags( err );
       	}
#else
	clEnqueueReadBuffer( hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0, NULL, NULL );
#endif
}

cl_int sclFinish( sclHard hardware ){
#ifdef DEBUG
	cl_int err;

	err = clFinish( hardware.queue );
	if ( err != CL_SUCCESS ) {
		fprintf( stderr,  "\nError clFinish\n" );
		sclPrintErrorFlags( err );
	}
#else
	clFinish( hardware.queue );
#endif

	return err;

}

cl_ulong sclGetEventTime( sclHard hardware, cl_event event ){

	cl_ulong elapsedTime, startTime, endTime;

	sclFinish( hardware );

	clGetEventProfilingInfo( event, CL_PROFILING_COMMAND_START, sizeof(cl_ulong), &startTime, NULL);
	clGetEventProfilingInfo( event, CL_PROFILING_COMMAND_END, sizeof(cl_ulong), &endTime, NULL);

	elapsedTime = endTime-startTime;

	return elapsedTime;
}

void sclSetKernelArg( sclSoft software, int argnum, size_t typeSize, void *argument ){
#ifdef DEBUG
	cl_int err;

	err = clSetKernelArg( software.kernel, argnum, typeSize, argument );
	if ( err != CL_SUCCESS ) {	
		fprintf( stderr,  "\nError clSetKernelArg number %d\n", argnum );
		sclPrintErrorFlags( err );
	}
#else
	clSetKernelArg( software.kernel, argnum, typeSize, argument );
#endif

}

void _sclWriteArgOnAFile( int argnum, void* arg, size_t size, const char* diff ) {
	FILE *out;
	char filename[150];

	sprintf( filename, "../data/arg%d%s", argnum, diff );

	out = fopen( filename, "w+");

	fwrite( arg, 1, size, out );

	fclose(out);
}

inline void _sclVSetKernelArgs( sclSoft software, const char *sizesValues, va_list argList ) {
	const char *p;
	int argCount = 0;
	void* argument;
	size_t actual_size;
	
	for( p = sizesValues; *p != '\0'; p++ ) {
		if ( *p == '%' ) {
			switch( *++p ) {
				case 'a':
					actual_size = va_arg( argList, size_t );
					argument = va_arg( argList, void* );
					sclSetKernelArg( software, argCount, actual_size, argument );
					argCount++;			
					break;

				case 'v':
					argument = va_arg( argList, void* );
					sclSetKernelArg( software, argCount, sizeof(cl_mem) , argument );
					argCount++;			
					break;

				case 'N':
					actual_size = va_arg( argList, size_t );
					sclSetKernelArg( software, argCount, actual_size, NULL );
					argCount++;			
					break;
				default:
					break;

			}
		}
	}
}

void sclSetKernelArgs( sclSoft software, const char *sizesValues, ... ){
	va_list argList;

	va_start( argList, sizesValues );

	_sclVSetKernelArgs( software, sizesValues, argList );	

	va_end( argList );

}

cl_event sclSetArgsLaunchKernel( sclHard hardware, sclSoft software, size_t *global_work_size, size_t *local_work_size,
				const char *sizesValues, ... ) {
	va_list argList;
	cl_event event;

	va_start( argList, sizesValues );
	
	_sclVSetKernelArgs( software, sizesValues, argList );	
	
	va_end( argList );

	event = sclLaunchKernel( hardware, software, global_work_size, local_work_size );

	return event;

}

cl_event sclSetArgsEnqueueKernel( sclHard hardware, sclSoft software, size_t *global_work_size, size_t *local_work_size,
				 const char *sizesValues, ... ) {
	va_list argList;
	cl_event event;

	va_start( argList, sizesValues );
	
	_sclVSetKernelArgs( software, sizesValues, argList );	
	
	va_end( argList );

	event = sclEnqueueKernel( hardware, software, global_work_size, local_work_size );

	return event;
	

}

cl_event sclManageArgsLaunchKernel( sclHard hardware, sclSoft software, size_t *global_work_size, size_t *local_work_size,
				    const char* sizesValues, ... ) {
	va_list argList;
	cl_event event;
	const char *p;
	int argCount = 0, outArgCount = 0, inArgCount = 0, i;
	void* argument;
	size_t actual_size;
	cl_mem outBuffs[30];
	cl_mem inBuffs[30];
	size_t sizesOut[30];
	typedef unsigned char* puchar;
	puchar outArgs[30];

	va_start( argList, sizesValues );

	for( p = sizesValues; *p != '\0'; p++ ) {
		if ( *p == '%' ) {
			switch( *++p ) {
				case 'a': /* Single value non pointer argument */
					actual_size = va_arg( argList, size_t );
					argument = va_arg( argList, void* );
					sclSetKernelArg( software, argCount, actual_size, argument );
					argCount++;			
					break;

				case 'v': /* Buffer or image object void* argument */
					argument = va_arg( argList, void* );
					sclSetKernelArg( software, argCount, sizeof(cl_mem) , argument );
					argCount++;			
					break;

				case 'N': /* Local memory object using NULL argument */
					actual_size = va_arg( argList, size_t );
					sclSetKernelArg( software, argCount, actual_size, NULL );
					argCount++;
					break;
				case 'w': /* */
					sizesOut[ outArgCount ] = va_arg( argList, size_t );
					outArgs[ outArgCount ] = (unsigned char*)va_arg( argList, void* );
					outBuffs[ outArgCount ] = sclMalloc( hardware, CL_MEM_WRITE_ONLY,
									     sizesOut[ outArgCount ] );
					sclSetKernelArg( software, argCount, sizeof(cl_mem), &outBuffs[ outArgCount ] );
					argCount++;
					outArgCount++;
					break;
				case 'r': /* */
					actual_size = va_arg( argList, size_t );
					argument = va_arg( argList, void* );
					inBuffs[ inArgCount ] = sclMallocWrite( hardware, CL_MEM_READ_ONLY, actual_size,
										  argument );
					sclSetKernelArg( software, argCount, sizeof(cl_mem), &inBuffs[ inArgCount ] );
					inArgCount++;
					argCount++;
					break;
				case 'R': /* */
					sizesOut[ outArgCount ] = va_arg( argList, size_t );
					outArgs[ outArgCount ] = (unsigned char*)va_arg( argList, void* );
					outBuffs[ outArgCount ] = sclMallocWrite( hardware, CL_MEM_READ_WRITE, 
										  sizesOut[ outArgCount ],
										  outArgs[ outArgCount ] );
					sclSetKernelArg( software, argCount, sizeof(cl_mem), &outBuffs[ outArgCount ] );
					argCount++;
					outArgCount++;
					break;
				case 'g':
					actual_size = va_arg( argList, size_t );
					inBuffs[ inArgCount ] = sclMalloc( hardware, CL_MEM_READ_WRITE, actual_size );
					sclSetKernelArg( software, argCount, sizeof(cl_mem), &inBuffs[ inArgCount ] );
					inArgCount++;
					argCount++;
					break;
				default:
					break;
			}
		}
	}
	
	va_end( argList );

	event = sclLaunchKernel( hardware, software, global_work_size, local_work_size );
	
	for ( i = 0; i < outArgCount; i++ ) {
		sclRead( hardware, sizesOut[i], outBuffs[i], outArgs[i] );		
	}

	sclFinish( hardware );
	
	for ( i = 0; i < outArgCount; i++ ) {
		sclReleaseMemObject( outBuffs[i] );		
	}

	for ( i = 0; i < inArgCount; i++ ) {
		sclReleaseMemObject( inBuffs[i] );
	}

	return event;
}

#ifdef __cplusplus
}
#endif
