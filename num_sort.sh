#!/bin/bash

arr=("$@")
strlen=${#arr[@]}
for((i=0;i<strlen;i++))
do
	for((j=0;j<strlen;j++))
	do
		if [ ${arr[$i]} -lt ${arr[$j]} ]
		then
			temp=${arr[$i]}
			arr[$i]=${arr[$j]}
			arr[$j]=$temp
		fi	
	done
done
echo ${arr[@]}

