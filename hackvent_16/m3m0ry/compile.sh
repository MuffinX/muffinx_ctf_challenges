#!/bin/sh


gcc -D_FORTIFY_SOURCE=2 -O1 -s -Wl,-z,relro,-z,now -fPIC -o m3m0ry m3m0ry.c

# ./m3m0ry

# gdb -q m3m0ry < gdb_input
