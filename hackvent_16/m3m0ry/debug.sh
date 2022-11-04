#!/bin/sh

./compile.sh
./payload.py

gdb -q m3m0ry < gdb_input
