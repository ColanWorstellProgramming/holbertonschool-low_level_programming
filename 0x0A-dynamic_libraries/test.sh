#!/bin/bash
gcc -c -fPIC *.c
gcc *.o -shared -o libdynamic.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
