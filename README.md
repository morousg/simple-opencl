**NOTE: Several things made me decide to stop thinking on future SimpleOpenCL developments.**

1. Apple will discontinue support for OpenCL in favor of it's proprietary Metal framework. 
2. NVIDIA has poor OpenCL support.
3. Some people at Khronos said that OpenCL and Vulkan will eventually become the same framework. So I prefer to wait and see how the creature looks like, before continuing SimpleOpenCL development. Maybe the new framework does not need something like SimpleOpenCL.**
4. I've (Oscar Amoros) been working on CUDA projects the last 2 years, and learned a lot of cool stuf that is only abailable on CUDA. Additionally, CUDA 9.x includes very interesting new features. I wish OpenCL 2.2 where available and NVIDIA had created OpenCL extensions for their features, but it is not happening (that I have seen).

**As a result I will stop further SimpleOpenCL development (don't know when, maybe just now). In the mean time, while the OpenCL-Vulkan integration is in process, and OpenCL future gets more clear, I will probably start other OpenSource contributions related to CUDA and my current professional projects.**

SimpleOpenCL is a library written in ANSI C and born in the needs of scientific research test development. It has been originated while developing different OpenCL codes for Linux and Apple test machines, with single device performance and portability goals in mind. The main goal of SimpleOpenCL has been reducing the Host code needed to run OpenCL C kernels on the GPU, but also supports managing CPU devices. In a sentence: **The only thing a programmer needs to know in order to use SimpleOpenCL is C, two SimpleOpenCL types, and a minimum of three functions**. Device code (OpenCL C kernels) is exactly the same as in OpenCL.

As this is an open source project, we welcome any contribution, from code correction and functionality suggestions/contributions to documentation or even contribution system proposals.

The main author has created and uses this library for its projects and aims to share it with those who want to use OpenCL with C or C++ for experimental codes in any sector. Nevertheless we think this can be an interesting library for academical purposes. With SimpleOpenCL the teacher can for instance focus on teaching Device code. And if desired later on the teacher could either show the library code to teach basic OpenCL Host code or propose student's to do more technical improvements over it or both.

**WARNING**: Don't download Featured version, it contains a bug for Apple machines and GoogleCode does not allow to change the link. Please **download "Download SimpleOpenCL WITH EXAMPLES"** on the External links section.

A comparative example:

**SimpleOpenCL code version**

```

#include "simpleCL.h"

int main() {
   char buf[]="Hello, World!";
   size_t global_size[2], local_size[2];
   int found, worksize;
   sclHard hardware;
   sclSoft software;

   // Target buffer just so we show we got the data from OpenCL
   worksize = strlen(buf);
   char buf2[worksize];
   buf2[0]='?';
   buf2[worksize]=0;
    
   // Get the hardware
   hardware = sclGetGPUHardware( 0, &found );
   // Get the software
   software = sclGetCLSoftware( "example.cl", "example", hardware );
   // Set NDRange dimensions
   global_size[0] = strlen(buf); global_size[1] = 1;
   local_size[0] = global_size[0]; local_size[1] = 1;
    
   sclManageArgsLaunchKernel( hardware, software, global_size, local_size,
                               " %r %w ",
                              worksize, buf, worksize, buf2 );
    
   // Finally, output out happy message.
   puts(buf2);

}
```

**Now the same code but in plain OpenCL WITHOUT using SimpleOpenCL**

```

#include <stdio.h>
#include <string.h>

#include <CL/cl.h>

int main() {
	char buf[]="Hello, World!";
	char build_c[4096];
	size_t srcsize, worksize=strlen(buf);
	
	cl_int error;
	cl_platform_id platform;
	cl_device_id device;
	cl_uint platforms, devices;
    
	/* Fetch the Platforms, we only want one. */
	error=clGetPlatformIDs(1, &platform, &platforms);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
        /* Fetch the Devices for this platform */
	error=clGetDeviceIDs(platform, CL_DEVICE_TYPE_ALL, 1, &device, &devices);
	if (error != CL_SUCCESS) {  
                printf("\n Error number %d", error);
	}
        /* Create a memory context for the device we want to use  */
	cl_context_properties properties[]={CL_CONTEXT_PLATFORM, (cl_context_properties)platform,0};
	/* Note that nVidia's OpenCL requires the platform property */
	cl_context context=clCreateContext(properties, 1, &device, NULL, NULL, &error);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
        /* Create a command queue to communicate with the device */
	cl_command_queue cq = clCreateCommandQueue(context, device, 0, &error);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	
        /* Read the source kernel code in exmaple.cl as an array of char's */
	char src[8192];
	FILE *fil=fopen("example.cl","r");
	srcsize=fread(src, sizeof src, 1, fil);
	fclose(fil);
    
	const char *srcptr[]={src};
	/* Submit the source code of the kernel to OpenCL, and create a program object with it */
	cl_program prog=clCreateProgramWithSource(context,
                                              1, srcptr, &srcsize, &error);
        if (error != CL_SUCCESS) {
                printf("\n Error number %d", error);
        }

	/* Compile the kernel code (after this we could extract the compiled version) */
	error=clBuildProgram(prog, 0, NULL, "", NULL, NULL);
	if ( error != CL_SUCCESS ) {
		printf( "Error on buildProgram " );
		printf("\n Error number %d", error);
		fprintf( stdout, "\nRequestingInfo\n" );
		clGetProgramBuildInfo( prog, devices, CL_PROGRAM_BUILD_LOG, 4096, build_c, NULL );
		printf( "Build Log for %s_program:\n%s\n", "example", build_c );
	}
    
	/* Create memory buffers in the Context where the desired Device is. These will be the pointer 
        parameters on the kernel. */
	cl_mem mem1, mem2;
	mem1=clCreateBuffer(context, CL_MEM_READ_ONLY, worksize, NULL, &error);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	mem2=clCreateBuffer(context, CL_MEM_WRITE_ONLY, worksize, NULL, &error);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	/* Create a kernel object with the compiled program */
	cl_kernel k_example=clCreateKernel(prog, "example", &error);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}

        /* Set the kernel parameters */
	error = clSetKernelArg(k_example, 0, sizeof(mem1), &mem1);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	error = clSetKernelArg(k_example, 1, sizeof(mem2), &mem2);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	/* Create a char array in where to store the results of the Kernel */
	char buf2[sizeof buf];
	buf2[0]='?';
	buf2[worksize]=0;
    
	/* Send input data to OpenCL (async, don't alter the buffer!) */
	error=clEnqueueWriteBuffer(cq, mem1, CL_FALSE, 0, worksize, buf, 0, NULL, NULL);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	/* Tell the Device, through the command queue, to execute que Kernel */
	error=clEnqueueNDRangeKernel(cq, k_example, 1, NULL, &worksize, &worksize, 0, NULL, NULL);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	/* Read the result back into buf2 */
	error=clEnqueueReadBuffer(cq, mem2, CL_FALSE, 0, worksize, buf2, 0, NULL, NULL);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	/* Await completion of all the above */
	error=clFinish(cq);
	if (error != CL_SUCCESS) {
		printf("\n Error number %d", error);
	}
	/* Finally, output the result */
	puts(buf2);
}
```

And this is without printing the names of the error flags, that would add a large function.

**Kernel code for both cases in OpenCL C (note that SimpleOpenCL doesn't alter Device code at all)**

```
__kernel void example( __global char* buf, __global char* buf2 ){
       int x = get_global_id(0);

       buf2[x] = buf[x];

}
```

**Contact:** oscaramoros@ub.edu
