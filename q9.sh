#!/bin/bash
read name
echo year,month,date in YYYY-MM-DD format -
read dd
year=`echo $dd | tr '-' ' '  | cut -d ' ' -f1`
month=`echo $dd | tr '-' ' '  | cut -d ' ' -f2`
date=`echo $dd | tr '-' ' '  | cut -d ' ' -f3`
y1=`date +%F | tr '-' ' '  | cut -d ' ' -f 1`
m1=`date +%F | tr '-' ' '  | cut -d ' ' -f 2`
d1=`date +%F | tr '-' ' '  | cut -d ' ' -f 3`
y=$((y1 - year))
m=$((m1 - month))
d=$((d1 - day))
if [ $d -lt 0  ]
then
d=$((-1 \* $d))
m=$((m-1))
fi
if [ $m -lt 0 ]
then
m=$((-1 \* $m))
y=$(($y - 1))
fi
if [ $m1 -eq $month ] && [ $d1 -eq $date ]
then
echo "Happy Birthday, $name. You are $y years old today!"
fi
