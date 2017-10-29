#!/bin/bash

string=$1
arr=(`grep -c "$string" *.c | cut -d":" -f 2`)
for i in ${arr[@]}
do
if [ $i -ne 0 ]; then
break
else
exit 1
fi
done
grep -c "$string" *.c | while read a
do 
file=`echo $a | cut -d"." -f 1`
num=`echo $a | cut -d":" -f 2`
echo $num lines in ${file}.txt
done
