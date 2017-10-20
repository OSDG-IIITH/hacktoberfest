#!/bin/bash
filenm=$1
if [ "$#" -ne 1 ]
then
	echo "Input a filename (only one) whose permission is to be changed"

elif [ ! -f $filenm ]
then
	echo "Not a File"

elif [ -f $filenm ]
then
	chmod u+x $filenm
fi
