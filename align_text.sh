#!/bin/bash
FILES="simple-opencl/simpleCL.c simple-opencl/simpleCL.h"
  
for i in $FILES
do
  clang-format "$i" > tmp;
  mv tmp "$i";
done
