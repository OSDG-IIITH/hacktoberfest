#!/bin/bash
for((i=1;i<=10;i++))
do
	p=`expr $i \* $i`
	echo -n "$p "
done
echo
b=1
for((i=1;i<=10;i++))
do
	for((j=1;j<=i;j++))
	do
		b=`expr $b \* $i`
	done
	echo -n "$b "
	b=1
done
echo
m=0
n=1
echo "$n"
for((i=3;i<=12;i++))
do
	k=`expr $m + $n`
	m=$n
	n=$k
	
	if [ `expr $k % 2`  -ne 0 ]
	then	
		echo "$k "
	fi
done	
	
