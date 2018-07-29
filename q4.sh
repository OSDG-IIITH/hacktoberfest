#!/bin/bash
fl=`cat $1 | tr -s "\n" | wc -l`
for((i=1;i<=fl;i++))
do
    k=`cat $1 | tr -s "\n" |cut -d$'\n' -f$i`
    echo "$i)  $k"
done
