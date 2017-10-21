#!/bin/bash
IFS=$'\n'
count=1
for i in `ping -c $1 www.google.com | gawk '{print strftime("%c: ") $0}'`
do	
	tput setaf $count
	echo $i
	((count++))
	if [ $count -ge 25 ]
	then 
		count=1
	fi
done

