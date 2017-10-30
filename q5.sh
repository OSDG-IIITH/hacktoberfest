#!/bin/bash
ans=""
for i in $*
do
if [ "$i" -eq "$i" ] 2>/dev/null
then
ans="$ans -k$i,$i"
fi
done
cat $1 $2 | sort $ans
