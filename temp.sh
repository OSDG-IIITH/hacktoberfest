#!/bin/bash
fail=1
for file in `find . -maxdepth 1 -name "*.txt"`
do
	lines=`cat $file | grep "$1" | wc -l`
	filename=`echo $file | cut -d '/' -f 2`
	if [ $lines -gt 0 ]
	then
		fail=0
		echo "$lines lines in $filename"
	fi
done
	exit $fail

