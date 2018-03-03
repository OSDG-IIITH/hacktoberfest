#!/bin/bash

count=0
#for i in `find . -maxdepth 1 -mindepth 1 -type d`
for i in `ls -R -1`
do
	if [ -d $i ]
	then
		p=0
		for j in `find $i -type f -printf '%s\n'`
		do
			p=$(($p+$j))
		done

		name[$count]=$i
		size[$count]=$p	
		((count++))
	fi
done

for((i=0;i<$count;i++))
do
	k=$(($i+1))
	for((j=$k;j<$count;j++))
	do
		if [ ${size[$i]} -ge ${size[$j]} ]
		then
			temp=${size[$i]}
			size[$i]=${size[$j]}
			size[$j]=$temp

			temp=${name[$i]}
			name[$i]=${name[$j]}
			name[$j]=$temp

		fi
	done
done

for((i=$count-1;i>=0;i--))
do
	if [ ${size[$i]} -ge 1048576 ]
	then
		size[$i]=`echo "scale=2; ${size[$i]}/1048576" | bc`
		size[$i]="${size[$i]}M"
	else

		size[$i]=`echo "scale=2; ${size[$i]}/1024" | bc`
		size[$i]="${size[$i]}K"
		echo "${name[$i]}   ${size[$i]}"
	fi
	done
	echo

	count=0
	for i in `ls -R -1`
	do
		if [ -d $i ]
		then
			name[$count]=$i
			file[$count]=$(find $i -type f | wc -l)
			((count++))
		fi
	done

	for((i=0;i<$count;i++))
	do
		k=$(($i+1))
		for((j=$k;j<$count;j++))
		do
			if [ ${file[$i]} -ge ${file[$j]} ]
			then
				temp=${file[$i]}
				file[$i]=${file[$j]}
				file[$j]=$temp

				temp=${name[$i]}
				name[$i]=${name[$j]}
				name[$j]=$temp
			fi
		done
	done
	for((i=$count-1;i>=0;i--))
	do
		file[$i]="${file[$i]} files"
		echo "${name[$i]}    ${file[$i]}"
	done

