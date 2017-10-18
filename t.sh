#!bin/bash
a=`cat t.txt | sort -n`
for i in $a
do
echo -e \\n $i
done
