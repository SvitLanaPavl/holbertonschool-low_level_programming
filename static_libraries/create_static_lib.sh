#!/bin/bash
c_files=$(find . -name "*.c")
for c_file in $c_files;
do
	gcc -c -o ${c_file%.*}.o $c_file
done
ar r liball.a *.o
