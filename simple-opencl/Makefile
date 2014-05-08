#######################################################################
#    Copyright 2011 Oscar Amoros Huguet, Cristian Garcia Marin
#
#   This file is part of SimpleOpenCL
#
#    SimpleOpenCL is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, version 3.
#
#    SimpleOpenCL is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
#    GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with SimpleOpenCL. If not, see <http://www.gnu.org/licenses/>.
#
####################################################################### 
#   SimpleOpenCL Version 0.09_01_10_2011 

HOME    = $(PWD)
CC      = gcc
CPP	= g++
CFLAGS  = -Wall -Wextra -pedantic -O3

UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
INCL_P  = -I$(HOME)/inc -I/usr/local/cuda/include
LIBS   = -lm -lOpenCL -lrt
INCL_AMD = -I$(HOME)/inc -I$(AMDAPPSDKROOT)/include 
LIBS_AMD = -L$(AMDAPPSDKROOT)/lib/x86_64 $(LIBS)
CFLAGS_AMD  = $(CFLAGS) -DATI_OS_LINUX 
endif
ifeq ($(UNAME), Darwin)
INCL_P   = -I$(HOME)/inc
LIBS     = -framework OpenCL
INCL_AMD = $(INCL_P) 
LIBS_AMD = $(LIBS)
CFLAGS_AMD = $(CFLAGS)
endif

all:
	$(CC) $(CFLAGS) $(INCL_P) -c simpleCL.c
	#Linking Example
	#$(CC) $(CFLAGS) *.o -o myapp.exe $(LIBS)

amd:
	$(CC) $(CFLAGS_AMD) $(INCL_AMD) -c simpleCL.c
	#Linking Example
	#$(CC) $(CFLAGS_AMD) *.o -o myapp.exe $(LIBS_AMD)

cpp:
	$(CPP) $(CFLAGS) $(INCL_P) -c simpleCL.c

cppAMD:
	$(CPP) $(CFLAGS_AMD) $(INCL_AMD) -c simpleCL.c
	

clean:
	rm -f *.o
