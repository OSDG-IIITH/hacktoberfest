#!/bin/bash
num=$1
if [ "$num" -gt 399 ]
then
	echo "Out of range!Please change your input!!"
	exit 0
fi  
roman ()
{
	n=$1
	fact=$2
	char=$3
	let "remainder = n - fact"
	while [ "$remainder" -ge 0 ]
	do
        	echo -n $char
        	let "n -= fact"
        	let "remainder = n - fact"
    	done  
    	return $n
}
roman $num 100 C
num=$?
roman $num 90 XC
num=$?
roman $num 50 L
num=$?
roman $num 40 XL
num=$?
roman $num 10 X
num=$?
roman $num 9 IX
num=$?
roman $num 5 V
num=$?
roman $num 4 IV
num=$?
roman $num 1 I
num=$?
echo
