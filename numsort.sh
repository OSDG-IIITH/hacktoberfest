#!/bin/bash
for ((k=1;k<=$#;k++))
do
	arr[$k]=${!k}
done
for ((i=1;i<=$#;i++))
do
	n=`expr $i + 1`
	for ((j=$n;j<=$#;j++))
	do
		if [[ ${arr[$i]} -gt ${arr[$j]} ]]
		then
			a=${arr[$i]}
			arr[$i]=${arr[$j]}
			arr[$j]=$a
		fi
	done
done
for ((k=1;k<=$#;k++))
do
	echo -n -e \ "${arr[$k]}"
done
echo

