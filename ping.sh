#!/bin/bash
n=`cat domain | wc -l`
for((i=1;i<=$n;i++))
do
m=`cat domain | sed -n "$i"p | cut -d "," -f2`
ping -c1 "$m".com
done
