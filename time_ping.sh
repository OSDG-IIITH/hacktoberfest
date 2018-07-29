#!/bin/bash

timestamp=$(date)

i8=`tput sgr 0`
read n
ping -c$n www.google.com | head -1
k=1;
for ((j=1;j<=n;j++))
do
	col=$(tput setaf $(echo $k))	
	echo $col $timestamp `ping -c$n www.google.com | head -2 | tail -1 ` ${i8}
	if [ $k -gt 7 ]
	then
		k=$(($k / 7))
	fi
	k=$(($k + 1))
done

