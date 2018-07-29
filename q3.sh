#!/bin/bash

f=0
num=`find -maxdepth 1 -name "*.txt" |  wc -l`
for((i=1;i<=$num;i++))
do
	name=`find -maxdepth 1 -name "*.txt" | cut -d '/' -f2 | cut -d$'\n' -f$i`
	c=`find ./ -maxdepth 1 -name "$name" | xargs grep -c "$1"`
	if [ $c -gt 0 ]
	then
		echo $c lines in $name
		f=1
	fi
done
if [ $f -eq 0 ]
        then
                echo 0
        fi
