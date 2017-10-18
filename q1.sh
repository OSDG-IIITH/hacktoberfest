#!/bin/bash

strlen=`df -h | grep /dev/sda | tr -s " " | cut -d ' ' -f1 | cut -c9 |wc -l`
for((i=1;i<=strlen;i++))
do
    m=`df -h | grep /dev/sda | tr -s " " | cut -c9 | cut -d$'\n' -f$i`
    m1=`df -h | grep /dev/sda | tr -s " " | cut -d ' ' -f5 | tr "%" " " | cut -d$'\n' -f$i`
    if [ $m1 -lt $1 ]
    then
        echo OK, /dev/sda$m, $m1'%'
    elif [ $m1 -lt $2 ]
    then
        echo WARNING, /dev/sda$m, $m1'%'
    else
        echo CRITICAL, /dev/sda$m, $m1'%'
    fi
done

