#######################################################################
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
along with SimpleOpenCL.  If not, see <http://www.gnu.org/licenses/>.

####################################################################### 

SimpleOpenCL Version 0.09_01_10_2011 ( version format v1.vv2_DD_MM_YYYY )

- v1 Incremented with increased functionality up to a certain goal or amount of changes (new functions)
- vv2 Incremented with bug corrections and functionality additions.
- date Set at the date of bug correction or any v1 or vv2 level modification.

Motivation and description ##################

SimpleOpenCL is a library written in ANSI C and born in the needs of scientific research test development. It has been originated while developing different OpenCL codes for Linux and Apple test machines, with single device performance and portability goals in mind. The main goal of SimpleOpenCL has been reducing the code needed to run the experiments on the GPU, but also supports managing CPU devices. As this is an open source project, we welcome any contribution, from code correction and functionality suggestions/contributions to documentation or even contribution system proposals.

The main author have created and uses this library for its projects and aims to share it with those who want to use OpenCL with C or C++ for experimental codes in any sector. Nevertheless we think this can be an interesting library for academical purposes. With SimpleOpenCL the teacher can for instance focus on teaching Device code. And if desired later on the teacher could either show the library code to teach basic OpenCL Host code or propose student's to do more technical improvements over it or both.

We are not aiming to provide a CUDA-like interface for OpenCL, but there will be some similarities. The main author proposes a CUDA-like library for OpenCL as a separate and more production oriented project.  

Version description #########################

Actual version 0.08:

- Non finished but working version. A first finished version is scheduled for version 1.0
- It provides two structs to simplify the handling of OpenCL objects. They are conceptually grouped in hardware and software.
- It provides simplified Device memory allocation and copy functionalities.
- It also provides a function that creates a list of devices using the "clHard" struct for each device, and creates a context for that devices. The context will be the same for same type and same memory capacity devices. If any of those differ, then different contexts will be created for each device.
- Other functions select the desired devices from the list.
- In order to get information of OpenCL errors, there is a function that prints the OpenCL error flags returned by the OpenCL functions.
- Functions to load Device source code, compile it etc are present.
- Functions to enqueue or execute kernels, etc...
- A main 1.0 version goal is already implemented as "sclManageArgsLaunchKernel". It can with only host pointers, sclHard and sclSoft variables NDRange dimensions and a string containing the info of what to do with the pointers etc, execute the kernel and update the results on the host pointers. All in a single function call.   

Next version #################################

Goals for version 1.0:

- All hardware selection functions must use the sclGetAllHardware function first if a list of hardware is not passed as an argument and it has NULL value. Then, the functions must return the desired hardware following the function criteria expressed in its own name.
- The sclManageArgsLaunchKernel can/must be improved in the following ways:
	
1 Optional: a version that hides sclHard and sclSoft so the user only cares about which host pointers will be read and written from the device in OpenCL C code and which to use exclusively on the device. Nothing else. Think of when to initialize hardware? Possibly needing a global variable pointing to the sclHard and sclSoft objects to avoid repeating the software/hardware initialization process on each kernel execution.
2 Mandatory: the function must have the ability to schedule work across all the devices available. So maybe the function will need more info from the user to know which data can be partitioned, and which can not. The possibility of internally using something similar to GMAC would be wonderfull. Pagination of the pointers in my opinion is the most efficient automatic method to do that work, but repeating a work already done would be frustrating.
