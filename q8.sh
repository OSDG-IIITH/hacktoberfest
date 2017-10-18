#!/bin/bash
# Assumption-Works for files in Current Directory
fname=("$@")
alength=${#fname[@]}
for((i=0;i<alength;i++))
do
	if [ -f ${fname[$i]} ]
	then
		ls -l | grep ${fname[$i]}
	else
		echo "Not a regular file"
	fi 
done
