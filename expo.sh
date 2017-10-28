#!/bin/bash

ans=1

for i in $@
do
	ans=`echo $ans*$i | bc`

done

ans=`echo $ans/$1 | bc`
ans=`echo $1^$ans | bc`
echo $ans
