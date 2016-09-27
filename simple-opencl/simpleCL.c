//\begin{comment}
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

void sclPrintErrorFlags(cl_int flag) {

  switch (flag) {

  case CL_DEVICE_NOT_FOUND:
    fprintf(stderr, "\nCL_DEVICE_NOT_FOUND\n");
    break;
  case CL_DEVICE_NOT_AVAILABLE:
    fprintf(stderr, "\nCL_DEVICE_NOT_AVAILABLE\n");
    break;
  case CL_COMPILER_NOT_AVAILABLE:
    fprintf(stderr, "\nCL_COMPILER_NOT_AVAILABLE\n");
    break;
  case CL_PROFILING_INFO_NOT_AVAILABLE:
    fprintf(stderr, "\nCL_PROFILING_INFO_NOT_AVAILABLE\n");
    break;
  case CL_MEM_COPY_OVERLAP:
    fprintf(stderr, "\nCL_MEM_COPY_OVERLAP\n");
    break;
  case CL_IMAGE_FORMAT_MISMATCH:
    fprintf(stderr, "\nCL_IMAGE_FORMAT_MISMATCH\n");
    break;
  case CL_IMAGE_FORMAT_NOT_SUPPORTED:
    fprintf(stderr, "\nCL_IMAGE_FORMAT_NOT_SUPPORTED\n");
    break;
  case CL_INVALID_COMMAND_QUEUE:
    fprintf(stderr, "\nCL_INVALID_COMMAND_QUEUE\n");
    break;
  case CL_INVALID_CONTEXT:
    fprintf(stderr, "\nCL_INVALID_CONTEXT\n");
    break;
  case CL_INVALID_MEM_OBJECT:
    fprintf(stderr, "\nCL_INVALID_MEM_OBJECT\n");
    break;
  case CL_INVALID_VALUE:
    fprintf(stderr, "\nCL_INVALID_VALUE\n");
    break;
  case CL_INVALID_EVENT_WAIT_LIST:
    fprintf(stderr, "\nCL_INVALID_EVENT_WAIT_LIST\n");
    break;
  case CL_MEM_OBJECT_ALLOCATION_FAILURE:
    fprintf(stderr, "\nCL_MEM_OBJECT_ALLOCATION_FAILURE\n");
    break;
  case CL_OUT_OF_HOST_MEMORY:
    fprintf(stderr, "\nCL_OUT_OF_HOST_MEMORY\n");
    break;

  case CL_INVALID_PROGRAM_EXECUTABLE:
    fprintf(stderr, "\nCL_INVALID_PROGRAM_EXECUTABLE\n");
    break;
  case CL_INVALID_KERNEL:
    fprintf(stderr, "\nCL_INVALID_KERNEL\n");
    break;
  case CL_INVALID_KERNEL_ARGS:
    fprintf(stderr, "\nCL_INVALID_KERNEL_ARGS\n");
    break;
  case CL_INVALID_WORK_DIMENSION:
    fprintf(stderr, "\nCL_INVALID_WORK_DIMENSION\n");
    break;
#ifndef __APPLE__
  case CL_INVALID_GLOBAL_WORK_SIZE:
    fprintf(stderr, "\nCL_INVALID_GLOBAL_WORK_SIZE\n");
    break;
#endif
  case CL_INVALID_WORK_GROUP_SIZE:
    fprintf(stderr, "\nCL_INVALID_WORK_GROUP_SIZE\n");
    break;
  case CL_INVALID_WORK_ITEM_SIZE:
    fprintf(stderr, "\nCL_INVALID_WORK_ITEM_SIZE\n");
    break;
  case CL_INVALID_GLOBAL_OFFSET:
    fprintf(stderr, "\nCL_INVALID_GLOBAL_OFFSET\n");
    break;
  case CL_OUT_OF_RESOURCES:
    fprintf(stderr, "\nCL_OUT_OF_RESOURCES\n");
    break;

  case CL_INVALID_PROGRAM:
    fprintf(stderr, "\nCL_INVALID_PROGRAM\n");
    break;
  case CL_INVALID_KERNEL_NAME:
    fprintf(stderr, "\nCL_INVALID_KERNEL_NAME\n");
    break;
  case CL_INVALID_KERNEL_DEFINITION:
    fprintf(stderr, "\nCL_INVALID_KERNEL_DEFINITION\n");
    break;
  case CL_INVALID_BUFFER_SIZE:
    fprintf(stderr, "\nCL_INVALID_BUFFER_SIZE\n");
    break;
  case CL_BUILD_PROGRAM_FAILURE:
    fprintf(stderr, "\nCL_BUILD_PROGRAM_FAILURE\n");
    break;
  case CL_INVALID_ARG_INDEX:
    fprintf(stderr, "\nCL_INVALID_ARG_INDEX\n");
    break;
  case CL_INVALID_ARG_VALUE:
    fprintf(stderr, "\nCL_INVALID_ARG_VALUE\n");
    break;
  case CL_MAP_FAILURE:
    fprintf(stderr, "\nCL_MAP_FAILURE\n");
    break;
  case CL_MISALIGNED_SUB_BUFFER_OFFSET:
    fprintf(stderr, "\nCL_MISALIGNED_SUB_BUFFER_OFFSET\n");
    break;
  case CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST:
    fprintf(stderr, "\nCL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST\n");
    break;
  case CL_INVALID_DEVICE_TYPE:
    fprintf(stderr, "\nCL_INVALID_DEVICE_TYPE\n");
    break;
  case CL_INVALID_PLATFORM:
    fprintf(stderr, "\nCL_INVALID_PLATFORM\n");
    break;
  case CL_INVALID_DEVICE:
    fprintf(stderr, "\nCL_INVALID_DEVICE\n");
    break;
  case CL_INVALID_QUEUE_PROPERTIES:
    fprintf(stderr, "\nCL_INVALID_QUEUE_PROPERTIES\n");
    break;
  case CL_INVALID_HOST_PTR:
    fprintf(stderr, "\nCL_INVALID_HOST_PTR\n");
    break;
  case CL_INVALID_IMAGE_FORMAT_DESCRIPTOR:
    fprintf(stderr, "\nCL_INVALID_IMAGE_FORMAT_DESCRIPTOR\n");
    break;
  case CL_INVALID_IMAGE_SIZE:
    fprintf(stderr, "\nCL_INVALID_IMAGE_SIZE\n");
    break;
  case CL_INVALID_SAMPLER:
    fprintf(stderr, "\nCL_INVALID_SAMPLER\n");
    break;
  case CL_INVALID_BINARY:
    fprintf(stderr, "\nCL_INVALID_BINARY\n");
    break;
  case CL_INVALID_BUILD_OPTIONS:
    fprintf(stderr, "\nCL_INVALID_BUILD_OPTIONS\n");
    break;
  case CL_INVALID_ARG_SIZE:
    fprintf(stderr, "\nCL_INVALID_ARG_SIZE\n");
    break;
  case CL_INVALID_EVENT:
    fprintf(stderr, "\nCL_INVALID_EVENT\n");
    break;
  case CL_INVALID_OPERATION:
    fprintf(stderr, "\nCL_INVALID_OPERATION\n");
    break;
  case CL_INVALID_GL_OBJECT:
    fprintf(stderr, "\nCL_INVALID_GL_OBJECT\n");
    break;
  case CL_INVALID_MIP_LEVEL:
    fprintf(stderr, "\nCL_INVALID_MIP_LEVEL\n");
    break;
  case CL_INVALID_PROPERTY:
    fprintf(stderr, "\nCL_INVALID_PROPERTY\n");
    break;
  default:
    fprintf(stderr, "\nUnknown error code: %d\n", flag);
  }
}

float diagnoseOpenCLnumber(cl_platform_id platform) {
#define VERSION_LENGTH 64
  char complete_version[VERSION_LENGTH];
  size_t realSize = 0;
  clGetPlatformInfo(platform, CL_PLATFORM_VERSION, VERSION_LENGTH,
                    &complete_version, &realSize);
  char version[4];
  version[3] = 0;
  memcpy(version, &complete_version[7], 3);
  // printf("V %s %f\n", version, version_float);
  float version_float = (float)atof(version);
  return version_float;
}

char *_sclLoadProgramSource(const char *filename) {
  struct stat statbuf;
  FILE *fh;
  char *source;

  fh = fopen(filename, "r");
  if (fh == NULL) {
    fprintf(stderr, "Error on loadProgramSource");
    sclPrintErrorFlags(CL_INVALID_PROGRAM);
    return 0;
  }

  stat(filename, &statbuf);
  source = (char *)malloc((size_t)statbuf.st_size + 1);

  if (fread(source, (size_t) statbuf.st_size, 1, fh) != 1) {
    fprintf(stderr, "Error on loadProgramSource");
    sclPrintErrorFlags(CL_INVALID_PROGRAM);
  }

  source[statbuf.st_size] = '\0';

  fclose(fh);

  return source;
}

cl_program _sclCreateProgram(char *program_source, cl_context context) {
  cl_program program;
#ifdef DEBUG
  cl_int err;

  program = clCreateProgramWithSource(
      context, 1, (const char **)&program_source, NULL, &err);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "Error on createProgram");
    sclPrintErrorFlags(err);
  }
#else
  program = clCreateProgramWithSource(
      context, 1, (const char **)&program_source, NULL, NULL);
#endif

  return program;
}

void _sclBuildProgram(cl_program program, cl_device_id devices,
                      const char *pName) {
#ifdef DEBUG
  cl_int err;
  char build_c[4096];

  err = clBuildProgram(program, 0, NULL, NULL, NULL, NULL);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "Error on buildProgram ");
    sclPrintErrorFlags(err);
    fprintf(stderr, "\nRequestingInfo\n");
    clGetProgramBuildInfo(program, devices, CL_PROGRAM_BUILD_LOG, 4096, build_c,
                          NULL);
    fprintf(stderr, "Build Log for %s_program:\n%s\n", pName, build_c);
  }
#else
  clBuildProgram(program, 0, NULL, NULL, NULL, NULL);
#endif
}

cl_kernel _sclCreateKernel(sclSoft software) {
  cl_kernel kernel;
#ifdef DEBUG
  cl_int err;

  kernel = clCreateKernel(software.program, software.kernelName, &err);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "Error on createKernel %s ", software.kernelName);
    sclPrintErrorFlags(err);
  }
#else
  kernel = clCreateKernel(software.program, software.kernelName, NULL);
#endif

  return kernel;
}

cl_event sclLaunchKernel(sclHard hardware, sclSoft software,
                         size_t *global_work_size, size_t *local_work_size) {
  cl_event myEvent = NULL;
#ifdef DEBUG
  cl_int err;

  err = clEnqueueNDRangeKernel(hardware.queue, software.kernel, 2, NULL,
                               global_work_size, local_work_size, 0, NULL,
                               &myEvent);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nError on launchKernel %s", software.kernelName);
    sclPrintErrorFlags(err);
  }
#else
  clEnqueueNDRangeKernel(hardware.queue, software.kernel, 2, NULL,
                         global_work_size, local_work_size, 0, NULL, NULL);
#endif
  sclFinish(hardware);
  return myEvent;
}

cl_event sclEnqueueKernel(sclHard hardware, sclSoft software,
                          size_t *global_work_size, size_t *local_work_size) {
  cl_event myEvent = NULL;
#ifdef DEBUG
  cl_int err;

  err = clEnqueueNDRangeKernel(hardware.queue, software.kernel, 2, NULL,
                               global_work_size, local_work_size, 0, NULL,
                               &myEvent);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nError on launchKernel %s", software.kernelName);
    sclPrintErrorFlags(err);
  }
#else
  clEnqueueNDRangeKernel(hardware.queue, software.kernel, 2, NULL,
                         global_work_size, local_work_size, 0, NULL, NULL);
#endif

  return myEvent;
}

void sclReleaseClSoft(sclSoft soft) {
  clReleaseKernel(soft.kernel);
  clReleaseProgram(soft.program);
}

void sclReleaseClHard(sclHard hardware) {
  clReleaseCommandQueue(hardware.queue);
  clReleaseContext(hardware.context);
}

void sclRetainClHard(sclHard hardware) {
  clRetainCommandQueue(hardware.queue);
  clRetainContext(hardware.context);
}

//\end{comment}
//\begin{lstlisting}[language=C]
//void sclReleaseAllHardware(sclHard *hardList, cl_int found) {
//  //\end{lstlisting}
//  //\begin{comment}
//  int i;
//
//  for (i = 0; i < found; ++i) {
//    sclReleaseClHard(hardList[i]);
//  }
//  /* free malloc'ed hardList in GetAllHardware */
//  free(hardList);
//}

void sclRetainAllHardware(sclHard *hardList, cl_int found) {
  int i;
  for (i = 0; i < found; ++i) {
    sclRetainClHard(hardList[i]);
  }
}

void sclReleaseMemObject(cl_mem object) {
  cl_int err;

  err = clReleaseMemObject(object);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nError on sclReleaseMemObject");
    sclPrintErrorFlags(err);
  }
}

void sclPrintDeviceNamePlatforms(sclHard *hardList, cl_int found) {
  int i;
  cl_char deviceName[1024];
  cl_char platformVendor[1024];
  cl_char platformName[1024];

  for (i = 0; i < found; ++i) {
    clGetPlatformInfo(hardList[i].platform, CL_PLATFORM_NAME,
                      sizeof(cl_char) * 1024, platformName, NULL);
    clGetPlatformInfo(hardList[i].platform, CL_PLATFORM_VENDOR,
                      sizeof(cl_char) * 1024, platformVendor, NULL);
    clGetDeviceInfo(hardList[i].device, CL_DEVICE_NAME, sizeof(cl_char) * 1024,
                    deviceName, NULL);
    fprintf(
        stdout,
        "\n Device %d \n Platform name: %s \n Vendor: %s \n Device name: %s",
        hardList[i].devNum, platformName, platformVendor, deviceName);
  }
}

void sclPrintHardwareStatus(sclHard hardware) {

  cl_int err;
  char platform[100];
  cl_bool deviceAV;

  err = clGetPlatformInfo(hardware.platform, CL_PLATFORM_NAME,
                          sizeof(char) * 100, platform, NULL);
  if (err == CL_SUCCESS) {
    fprintf(stdout, "\nPlatform object alive");
  } else {
    sclPrintErrorFlags(err);
  }

  err = clGetDeviceInfo(hardware.device, CL_DEVICE_AVAILABLE, sizeof(cl_bool),
                        (void *)(&deviceAV), NULL);
  if (err == CL_SUCCESS && deviceAV) {
    fprintf(stdout, "\nDevice object alive and device available.");
  } else if (err == CL_SUCCESS) {
    fprintf(stdout, "\nDevice object alive and device NOT available.");
  } else {
    fprintf(stderr, "\nDevice object not alive.");
  }
}

void _sclCreateQueues(sclHard *hardList, cl_int found) {

  int i;
#ifdef DEBUG
  cl_int err;

  float version_float;
  cl_queue_properties properties[] = {CL_QUEUE_PROFILING_ENABLE};
  for (i = 0; i < found; ++i) {
    version_float = diagnoseOpenCLnumber(hardList[i].platform);
    if (version_float >= 2.0f) {
      hardList[i].queue = clCreateCommandQueueWithProperties(
          hardList[i].context, hardList[i].device, properties, &err);
    } else {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
      hardList[i].queue = clCreateCommandQueue(
          hardList[i].context, hardList[i].device, *properties, &err);
#pragma GCC diagnostic pop
    }
    if (err != CL_SUCCESS) {
      fprintf(stderr, "\nError creating command queue %d", i);
    }
  }
#else
  for (i = 0; i < found; ++i) {
    hardList[i].queue = clCreateCommandQueue(hardList[i].context,
                                             hardList[i].device, NULL, NULL);
  }
#endif
}

void _sclSmartCreateContexts(sclHard *hardList, cl_int found) {

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

  for (i = 0; i < found; ++i) { /* Group generation */

    clGetPlatformInfo(hardList[i].platform, CL_PLATFORM_NAME, 1024,
                      var_queries1, NULL);

    if (nGroups == 0) {
      groups[0][0] = &(hardList[0]);
      nGroups++;
      groupSizes[0] = 1;
    } else {
      groupSet = 0;
      for (j = 0; j < nGroups; ++j) {
        clGetPlatformInfo(groups[j][0]->platform, CL_PLATFORM_NAME, 1024,
                          var_queries2, NULL);
        if (strcmp(var_queries1, var_queries2) == 0 &&
            hardList[i].deviceType == groups[j][0]->deviceType &&
            hardList[i].maxPointerSize == groups[j][0]->maxPointerSize) {
          groups[j][groupSizes[j]] = &(hardList[i]);
          groupSizes[j]++;
          groupSet = 1;
        }
      }
      if (!groupSet) {
        groups[nGroups][0] = &(hardList[i]);
        groupSizes[nGroups] = 1;
        nGroups++;
      }
    }
  }

  for (i = 0; i < nGroups; ++i) { /* Context generation */

    fprintf(stdout, "\nGroup %d with %d devices", i + 1, groupSizes[i]);
    for (j = 0; j < groupSizes[i]; ++j) {
      deviceList[j] = groups[i][j]->device;
    }
#ifdef DEBUG
    context = clCreateContext(0, (cl_uint) groupSizes[i], deviceList, NULL, NULL, &err);
    if (err != CL_SUCCESS) {
      fprintf(stderr, "\nError creating context on device %d", i);
    }
#else
    context = clCreateContext(0, groupSizes[i], deviceList, NULL, NULL, NULL);
#endif
    for (j = 0; j < groupSizes[i]; ++j) {
      groups[i][j]->context = context;
    }
  }
}

int _sclGetMaxComputeUnits(cl_device_id device) {

  cl_uint nCompU;

  clGetDeviceInfo(device, CL_DEVICE_MAX_COMPUTE_UNITS, 4, (void *)&nCompU,
                  NULL);

  return (int)nCompU;
}

unsigned long int _sclGetMaxMemAllocSize(cl_device_id device) {

  cl_ulong mem;

  clGetDeviceInfo(device, CL_DEVICE_MAX_MEM_ALLOC_SIZE, 8, (void *)&mem, NULL);

  return (unsigned long int)mem;
}

int _sclGetDeviceType(cl_device_id device) {

  int out = 3;
  char var_queries[1024];

  clGetDeviceInfo(device, CL_DEVICE_TYPE, 1024, var_queries, NULL);

  if (strcmp(var_queries, "CL_DEVICE_TYPE_GPU") == 0) {
    out = 0;
  } else if (strcmp(var_queries, "CL_DEVICE_TYPE_CPU") == 0) {
    out = 1;
  } else if (strcmp(var_queries, "CL_DEVICE_TYPE_ACCELERATOR") == 0) {
    out = 2;
  }

  return out;
}

void sclGetFastestDevice(const sclHard *hardList, const cl_int found, sclHard
*fastest) {
  int i, maxCpUnits = 0, device = 0;

  for (i = 0; i < found; ++i) {
    fprintf(stdout, "\nDevice %d Compute Units %d", i,
            hardList[i].nComputeUnits);
    if (maxCpUnits < hardList[i].nComputeUnits) {
      device = i;
      maxCpUnits = hardList[i].nComputeUnits;
    }
  }

  *fastest = hardList[device];
}

//\end{comment}
//\begin{lstlisting}[language=C]
//void sclGetAllHardware(int *found, sclHard *hardwareList) {
//  //\end{lstlisting}
//  //\begin{comment}
//
//  int i, j;
//  cl_uint nPlatforms = 0, nDevices = 0;
//  cl_int err;
//  int i_found = 0, n_found = 0;
//
//  cl_platform_id platforms[NB_MAX_PLATFORMS];
//  cl_device_id devices[NB_MAX_PLATFORMS][NB_MAX_DEVICES_PER_PLATFORM];
//
//  err = clGetPlatformIDs(NB_MAX_PLATFORMS, platforms, &nPlatforms);
//  if (nPlatforms == 0) {
//    fprintf(stderr, "\nNo OpenCL platforms found.\n");
//  } else {
//    /* for each platform, count for devices */
//    for (i = 0; i < (int)nPlatforms; ++i) {
//      err = clGetDeviceIDs(platforms[i], CL_DEVICE_TYPE_ALL,
//                           NB_MAX_DEVICES_PER_PLATFORM, &devices[i][0],
//                           &nDevices);
//      if (err != CL_SUCCESS) {
//        fprintf(stderr, "\nError clGetDeviceIDs");
//        sclPrintErrorFlags(err);
//      } else {
//        n_found = (n_found + (int) nDevices);
//      }
//    }
//
//    // Number of found devices is 'n_found'
//    *hardwareList = (sclHard *)malloc((size_t) n_found * sizeof(sclHard));
//
//    /* re-scan all platforms to setup devices */
//    for (i = 0; i < (int)nPlatforms; ++i) {
//      err = clGetDeviceIDs(platforms[i], CL_DEVICE_TYPE_ALL,
//                           NB_MAX_DEVICES_PER_PLATFORM, &devices[i][0],
//                           &nDevices);
//      if (err != CL_SUCCESS) {
//        fprintf(stderr, "\nError clGetDeviceIDs");
//        sclPrintErrorFlags(err);
//      } else {
//        /* save every available devices on each platform */
//        for (j = 0; j < (int)nDevices; ++j) {
//          hardwareList[i_found].platform = platforms[i];
//          hardwareList[i_found].device = devices[i][j];
//          hardwareList[i_found].nComputeUnits =
//              _sclGetMaxComputeUnits(*hardwareList[i_found].device);
//          hardwareList[i_found].maxPointerSize =
//              _sclGetMaxMemAllocSize(*hardwareList[i_found].device);
//          hardwareList[i_found].deviceType =
//              _sclGetDeviceType(*hardwareList[i_found].device);
//          hardwareList[i_found].devNum = i_found;
//          (i_found)++;
//        }
//      }
//    }
//    _sclSmartCreateContexts(*hardwareList, n_found);
//    _sclCreateQueues(*hardwareList, n_found);
//#ifdef DEBUG
//    sclPrintDeviceNamePlatforms(*hardwareList, n_found);
//#endif
//    sclRetainAllHardware(*hardwareList, n_found);
//  }
//
//  *found = n_found;
//}

void sclGetHardwareByType(const cl_device_type device_type, const int iDevice,
                             int *found, sclHard *Hardware) {
  cl_uint i;
  sclHard hardware;
  cl_int err;
  cl_uint nPlatforms, nDevices = 0;
  cl_char vendor_name[1024];
  cl_char device_name[1024];
  char platformName[256];

  *found = 0;
  cl_platform_id platforms[NB_MAX_PLATFORMS];
  cl_device_id devices[NB_MAX_PLATFORMS][NB_MAX_DEVICES_PER_PLATFORM];

  /*Get platform info ###################################################### */
  err = clGetPlatformIDs(NB_MAX_PLATFORMS, platforms, &nPlatforms);
  /*fprintf( stdout, "\n Number of platforms found: %d \n",nPlatforms);*/
  /* ###################################################### */

  if (nPlatforms == 0) {
    fprintf(stderr, "\nNo OpenCL platforms found.\n");
    *found = 0;
  } else {
    for (i = 0; i < nPlatforms; ++i) {
      err =
          clGetDeviceIDs(platforms[i], device_type, NB_MAX_DEVICES_PER_PLATFORM,
                         &devices[i][0], &nDevices);
      if (err != CL_SUCCESS) {
        fprintf(stderr, "\nError clGetDeviceIDs");
        sclPrintErrorFlags(err);
      }

      if (nDevices > 0) {
        // device_type found, return it
        cl_queue_properties properties[] = {CL_QUEUE_PROFILING_ENABLE};
        hardware.platform = platforms[i];
        float version_float = diagnoseOpenCLnumber(hardware.platform);
        hardware.device = devices[i][(iDevice < (int)nDevices ? iDevice : 0)];
        hardware.context =
            clCreateContext(0, 1, &hardware.device, NULL, NULL, &err);
        if (err != CL_SUCCESS) {
          fprintf(stderr, "\nError 3");
          sclPrintErrorFlags(err);
        };
        if (version_float >= 2.0f) {
          hardware.queue = clCreateCommandQueueWithProperties(
              hardware.context, hardware.device, properties, &err);
        } else {
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
          hardware.queue = clCreateCommandQueue(
              hardware.context, hardware.device, *properties, &err);
#pragma GCC diagnostic pop
        }
        if (err != CL_SUCCESS) {
          fprintf(stderr, "\nError 3.1");
          sclPrintErrorFlags(err);
        };
        /* deviceType 0 = GPU | deviceType 1 = CPU | deviceType 2 = Accelerator
         * | deviceType 3 = other */
        hardware.deviceType =
            (device_type == CL_DEVICE_TYPE_GPU
                 ? 0
                 : (device_type == CL_DEVICE_TYPE_CPU
                        ? 1
                        : (device_type == CL_DEVICE_TYPE_ACCELERATOR ? 2 : 3)));

        // some info
        platformName[0] = '\0';
        vendor_name[0] = '\0';
        device_name[0] = '\0';

        err = clGetPlatformInfo(hardware.platform, CL_PLATFORM_VENDOR,
                                (size_t)256, (void *)platformName, NULL);
        err |= clGetDeviceInfo(hardware.device, CL_DEVICE_VENDOR,
                               sizeof(vendor_name), vendor_name, NULL);
        err |= clGetDeviceInfo(hardware.device, CL_DEVICE_NAME,
                               sizeof(device_name), device_name, NULL);
        if (err != CL_SUCCESS) {
          fprintf(stderr, "\nError getting platform + vendor + device name");
          sclPrintErrorFlags(err);
        }
        fprintf(stdout, "\nUsing platform: %s - Vendor: %s\nDevice name: %s\n",
                platformName, vendor_name, device_name);

        *found = 1;
      }
    }
  }

  *Hardware = hardware;
}

void sclGetGPUHardware(const int iDevice, int *found, sclHard *GPUHardware) {
  sclGetHardwareByType(CL_DEVICE_TYPE_GPU, iDevice, found, GPUHardware);
}

void sclGetCPUHardware(const int iDevice, int *found, sclHard *CPUHardware) {
  sclGetHardwareByType(CL_DEVICE_TYPE_CPU, iDevice, found, CPUHardware);
}

void sclGetAcceleratorHardware(const int iDevice, int *found, sclHard
*AcceleratorHardware) {
  sclGetHardwareByType(CL_DEVICE_TYPE_ACCELERATOR, iDevice, found,
AcceleratorHardware);
}

//\end{comment}
//\begin{lstlisting}[language=C]
void sclGetCLSoftware(const char *kernel_file, const char *kernel_name,
                         const sclHard hardware, sclSoft *Software) {
  //\end{lstlisting}
  //\begin{comment}
  sclSoft software;
  /* Load program source
   ########################################################### */
  char *source = _sclLoadProgramSource(kernel_file);
  /* ########################################################### */

  sprintf(software.kernelName, "%s", kernel_name);

  /* Create program objects from source
   ########################################################### */
  software.program = _sclCreateProgram(source, hardware.context);
  /* ########################################################### */

  /* Build the program (compile it)
   ############################################ */
  _sclBuildProgram(software.program, hardware.device, kernel_name);
  /* ############################################ */

  /* Create the kernel object
   ########################################################################## */
  software.kernel = _sclCreateKernel(software);
  /* ##########################################################################
   */

  /* free source malloc'ed in _sclLoadProgramSource */
  free(source);

  *Software = software;
}

cl_mem sclMalloc(sclHard hardware, cl_int mode, size_t size) {
  cl_mem buffer;
#ifdef DEBUG
  cl_int err;

  buffer = clCreateBuffer(hardware.context, (cl_mem_flags) mode, size, NULL, &err);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nclMalloc Error\n");
    sclPrintErrorFlags(err);
  }
#else
  buffer = clCreateBuffer(hardware.context, mode, size, NULL, NULL);
#endif

  return buffer;
}

cl_mem sclMallocWrite(sclHard hardware, cl_int mode, size_t size,
                      void *hostPointer) {
  cl_mem buffer;

  buffer = sclMalloc(hardware, mode, size);

#ifdef DEBUG
  cl_int err;

  if (buffer == NULL) {
    fprintf(stderr, "\nclMallocWrite Error on clCreateBuffer\n");
  }
  err = clEnqueueWriteBuffer(hardware.queue, buffer, CL_TRUE, 0, size,
                             hostPointer, 0, NULL, NULL);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nclMallocWrite Error on clEnqueueWriteBuffer\n");
    sclPrintErrorFlags(err);
  }

#else
  clEnqueueWriteBuffer(hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0,
                       NULL, NULL);
#endif
  return buffer;
}

void sclWrite(sclHard hardware, size_t size, cl_mem buffer, void *hostPointer) {
#ifdef DEBUG
  cl_int err;

  err = clEnqueueWriteBuffer(hardware.queue, buffer, CL_TRUE, 0, size,
                             hostPointer, 0, NULL, NULL);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nclWrite Error\n");
    sclPrintErrorFlags(err);
  }
#else
  clEnqueueWriteBuffer(hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0,
                       NULL, NULL);
#endif
}

void sclRead(sclHard hardware, size_t size, cl_mem buffer, void *hostPointer) {
#ifdef DEBUG
  cl_int err;

  err = clEnqueueReadBuffer(hardware.queue, buffer, CL_TRUE, 0, size,
                            hostPointer, 0, NULL, NULL);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nclRead Error\n");
    sclPrintErrorFlags(err);
  }
#else
  clEnqueueReadBuffer(hardware.queue, buffer, CL_TRUE, 0, size, hostPointer, 0,
                      NULL, NULL);
#endif
}

cl_int sclFinish(sclHard hardware) {
#ifdef DEBUG
  cl_int err;

  err = clFinish(hardware.queue);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nError clFinish\n");
    sclPrintErrorFlags(err);
  }
#else
  clFinish(hardware.queue);
#endif

  return err;
}

cl_ulong sclGetEventTime(sclHard hardware, cl_event event) {

  cl_ulong elapsedTime, startTime, endTime;

  sclFinish(hardware);

  clGetEventProfilingInfo(event, CL_PROFILING_COMMAND_START, sizeof(cl_ulong),
                          &startTime, NULL);
  clGetEventProfilingInfo(event, CL_PROFILING_COMMAND_END, sizeof(cl_ulong),
                          &endTime, NULL);

  elapsedTime = endTime - startTime;

  return elapsedTime;
}

void sclSetKernelArg(sclSoft software, int argnum, size_t typeSize,
                     void *argument) {
#ifdef DEBUG
  cl_int err;

  err = clSetKernelArg(software.kernel, (cl_uint) argnum, typeSize, argument);
  if (err != CL_SUCCESS) {
    fprintf(stderr, "\nError clSetKernelArg number %d\n", argnum);
    sclPrintErrorFlags(err);
  }
#else
  clSetKernelArg(software.kernel, argnum, typeSize, argument);
#endif
}

void _sclWriteArgOnAFile(int argnum, void *arg, size_t size, const char *diff) {
  FILE *out;
  char filename[150];

  sprintf(filename, "../data/arg%d%s", argnum, diff);

  out = fopen(filename, "w+");

  fwrite(arg, 1, size, out);

  fclose(out);
}

void _sclVSetKernelArgs(sclSoft software, const char *sizesValues,
                        va_list argList) {
  const char *p;
  int argCount = 0;
  void *argument;
  size_t actual_size;

  for (p = sizesValues; *p != '\0'; p++) {
    if (*p == '%') {
      switch (*++p) {
      case 'a': /* literal */
        actual_size = va_arg(argList, size_t);
        argument = va_arg(argList, void *);
        sclSetKernelArg(software, argCount, actual_size, argument);
        argCount++;
        break;

      case 'v': /* cl_mem argument */
        argument = va_arg(argList, void *);
        sclSetKernelArg(software, argCount, sizeof(cl_mem), argument);
        argCount++;
        break;

      case 'N': /* local variable */
        actual_size = va_arg(argList, size_t);
        sclSetKernelArg(software, argCount, actual_size, NULL);
        argCount++;
        break;
      default:
        break;
      }
    }
  }
}

void sclSetKernelArgs(sclSoft software, const char *sizesValues, ...) {
  va_list argList;

  va_start(argList, sizesValues);

  _sclVSetKernelArgs(software, sizesValues, argList);

  va_end(argList);
}

cl_event sclSetArgsLaunchKernel(sclHard hardware, sclSoft software,
                                size_t *global_work_size,
                                size_t *local_work_size,
                                const char *sizesValues, ...) {
  va_list argList;
  cl_event event;

  va_start(argList, sizesValues);

  _sclVSetKernelArgs(software, sizesValues, argList);

  va_end(argList);

  event =
      sclLaunchKernel(hardware, software, global_work_size, local_work_size);

  return event;
}

cl_event sclSetArgsEnqueueKernel(sclHard hardware, sclSoft software,
                                 size_t *global_work_size,
                                 size_t *local_work_size,
                                 const char *sizesValues, ...) {
  va_list argList;
  cl_event event;

  va_start(argList, sizesValues);

  _sclVSetKernelArgs(software, sizesValues, argList);

  va_end(argList);

  event =
      sclEnqueueKernel(hardware, software, global_work_size, local_work_size);

  return event;
}

//\end{comment}
//\begin{lstlisting}[language=C]
cl_event sclManageArgsLaunchKernel(sclHard hardware, sclSoft software,
                                   size_t *global_work_size,
                                   size_t *local_work_size,
                                   const char *sizesValues, ...) {
  //\end{lstlisting}
  //\begin{comment}
  va_list argList;
  cl_event event;
  const char *p;
  int argCount = 0, outArgCount = 0, inArgCount = 0, i;
  void *argument;
  size_t actual_size;
  cl_mem outBuffs[30];
  cl_mem inBuffs[30];
  size_t sizesOut[30];
  typedef unsigned char *puchar;
  puchar outArgs[30];

  va_start(argList, sizesValues);

  //\end{comment}
  //\subsection{kernel argument assignement sizeTypes string's letter meanings}
  //\begin{lstlisting}[language=C]
  for (p = sizesValues; *p != '\0'; p++) {
    if (*p == '%') {
      switch (*++p) {
      case 'a': /* Single value non pointer argument: byte length, array pointer
                   */
        //\end{lstlisting}
        //\begin{comment}
        actual_size = va_arg(argList, size_t);
        argument = va_arg(argList, void *);
        sclSetKernelArg(software, argCount, actual_size, argument);
        argCount++;
        break;

      //\end{comment}
      //\begin{lstlisting}[language=C]
      case 'v': /* Buffer or image object void* argument: array pointer */
                //\end{lstlisting}
                //\begin{comment}
        argument = va_arg(argList, void *);
        sclSetKernelArg(software, argCount, sizeof(cl_mem), argument);
        argCount++;
        break;

      //\end{comment}
      //\begin{lstlisting}[language=C]
      case 'N': /* Local memory object using NULL argument: byte length */
                //\end{lstlisting}
                //\begin{comment}
        actual_size = va_arg(argList, size_t);
        sclSetKernelArg(software, argCount, actual_size, NULL);
        argCount++;
        break;
      //\end{comment}
      //\begin{lstlisting}[language=C]
      case 'w': /* output write_only cl_mem buffer: byte length, array pointer*/
                //\end{lstlisting}
                //\begin{comment}
        sizesOut[outArgCount] = va_arg(argList, size_t);
        outArgs[outArgCount] = (unsigned char *)va_arg(argList, void *);
        outBuffs[outArgCount] =
            sclMalloc(hardware, CL_MEM_WRITE_ONLY, sizesOut[outArgCount]);
        sclSetKernelArg(software, argCount, sizeof(cl_mem),
                        &outBuffs[outArgCount]);
        argCount++;
        outArgCount++;
        break;
      //\end{comment}
      //\begin{lstlisting}[language=C]
      case 'r': /* input read_only cl_mem buffer: byte size, array pointer */
                //\end{lstlisting}
                //\begin{comment}
        actual_size = va_arg(argList, size_t);
        argument = va_arg(argList, void *);
        inBuffs[inArgCount] =
            sclMallocWrite(hardware, CL_MEM_READ_ONLY, actual_size, argument);
        sclSetKernelArg(software, argCount, sizeof(cl_mem),
                        &inBuffs[inArgCount]);
        inArgCount++;
        argCount++;
        break;
      //\end{comment}
      //\begin{lstlisting}[language=C]
      case 'R': /* output read_write buffer: byte length, array pointer*/
                //\end{lstlisting}
                //\begin{comment}
        sizesOut[outArgCount] = va_arg(argList, size_t);
        outArgs[outArgCount] = (unsigned char *)va_arg(argList, void *);
        outBuffs[outArgCount] =
            sclMallocWrite(hardware, CL_MEM_READ_WRITE, sizesOut[outArgCount],
                           outArgs[outArgCount]);
        sclSetKernelArg(software, argCount, sizeof(cl_mem),
                        &outBuffs[outArgCount]);
        argCount++;
        outArgCount++;
        break;
      //\end{comment}
      //\begin{lstlisting}[language=C]
      case 'g': /* output read_write variable: bytesize */
        //\end{lstlisting}
        //\begin{comment}
        actual_size = va_arg(argList, size_t);
        inBuffs[inArgCount] =
            sclMalloc(hardware, CL_MEM_READ_WRITE, actual_size);
        sclSetKernelArg(software, argCount, sizeof(cl_mem),
                        &inBuffs[inArgCount]);
        inArgCount++;
        argCount++;
        break;
      default:
        break;
      }
    }
  }

  va_end(argList);

  event =
      sclLaunchKernel(hardware, software, global_work_size, local_work_size);

  for (i = 0; i < outArgCount; i++) {
    sclRead(hardware, sizesOut[i], outBuffs[i], outArgs[i]);
  }

  sclFinish(hardware);

  for (i = 0; i < outArgCount; i++) {
    sclReleaseMemObject(outBuffs[i]);
  }

  for (i = 0; i < inArgCount; i++) {
    sclReleaseMemObject(inBuffs[i]);
  }

  return event;
}

#ifdef __cplusplus
}
#endif
//\end{comment}
