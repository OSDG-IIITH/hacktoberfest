#!/bin/bash
number=( "$@" )
length=${#number[@]}
i=0
while [ $i -lt $((length-1)) ]
do
	j=$((i+1))
	while [ $j -lt $((length)) ]
	do
		if [[ ${number[$i]} -gt ${number[$j]} ]];
		then
		temp=${number[$i]}
		number[$i]=${number[$j]}
		number[$j]=$temp
		fi
	j=$((j+1))
	done
	i=$((i+1))
done
echo "${number[@]}"
