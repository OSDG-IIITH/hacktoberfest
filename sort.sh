#!/bin/bash

array=("$@")
a=${#array[@]}
b=$(($a-1))

for((i=0;i<$b;i++))
do
	c=$(($i+1))
	for((j=$c;j<$a;j++))
	do
		if [ ${array[$i]} -gt ${array[$j]} ]
		then
			temp=${array[$i]}
			array[$i]=${array[$j]}
			array[$j]=$temp
	        fi
	done
done
for((j=0;j<$a;j++))
	do
		echo -n "${array[$j]} "
	done

