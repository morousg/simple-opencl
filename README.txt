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
along with Foobar.  If not, see <http://www.gnu.org/licenses/>.

####################################################################### 

SimpleOpenCL Version 0.01_26_09_2011 ( version format v1.vv2_DD_MM_YYYY )

- v1 Incremented with increased functionality up to a certain goal or amount of changes (new functions)
- vv2 Incremented with improvements in actual version functionality (no new functions, but changes on 	functions headers and/or code).
- date Set at the date of bug correction or any v1 or vv2 level modification.

Motivation and description ##################

SimpleOpenCL is a library written in ANSI C and born in the needs of scientific research test development. It has been originated while developing different OpenCL codes for Linux and Apple test machines, with single device performance and portability goals in mind. The main goal of SimpleOpenCL has been reducing the code needed to run the experiments on the GPU, but also supports managing CPU devices. As this is an open source project, we welcome any contribution, from code correction and functionality suggestions/contributions to documentation or even contribution system proposals.

The main author have created and uses this library for its projects and aims to share it with those who want to use OpenCL with C or C++ for experimental codes in any sector. Nevertheless we think this can be an interesting library for academical purposes. With SimpleOpenCL the teacher can for instance focus on teaching Device code. And if desired later on the teacher could either show the library code to teach basic OpenCL Host code or propose student's to do more technical improvements over it or both.

We are not aiming to provide a CUDA-like interface for OpenCL, but there will be some similarities. The main author proposes a CUDA-like library for OpenCL as a separate and more production oriented project.  

Version description #########################

Actual version 0.01:

- Non finished but working version. A first finished version is scheduled for version 1.0
- It provides two structs to simplify the handling of OpenCL objects. They are conceptually grouped in hardware and software.
- It provides simplified Device memory allocation and copy functionalities.
- It also provides a function that creates a list of devices using the "clHard" struct for each device, and creates a context for that devices. The context will be the same for same type and same memory capacity devices. If any of those differ, then different contexts will be created for each device.
- Other functions select the desired devices from the list.
- In order to get information of OpenCL errors, there is a function that prints the OpenCL error flags returned by the OpenCL functions.
- Functions to load Device source code, compile it etc are present. 

Next version #################################

Goals for version 1.0:

- Function names must be unified under a certain criteria. Something like sclFunctionName.
- All hardware selection functions must use the getAllHardware function first if a list of hardware is 	not passed as an argument or it has NULL value, and then return the desired hardware following the function criteria expressed in its own name.
- There should be a function that allows to set the arguments of a kernel and enqueue execution in a single line. Cristian's proposed solution is to use a printf style function. That can be a bit bulky, but very useful. Any other proposal is welcome.
