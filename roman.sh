#!/bin/bash
#Thousands Array
th[0]=""
th[1]="M"
th[2]="MM"
th[3]="MMM"
#Hundreds Array
hun[0]=""
hun[1]="C"
hun[2]="CC"
hun[3]="CCC"
hun[4]="CD"
hun[5]="D"
hun[6]="DC"
hun[7]="DCC"
hun[8]="DCCC"
hun[9]="CM"
#Tens Array
ten[0]=""
ten[1]="X"
ten[2]="XX"
ten[3]="XXX"
ten[4]="XL"
ten[5]="L"
ten[6]="LX"
ten[7]="LXX"
ten[8]="LXXX"
ten[9]="XC"
#Units Array
unit[0]=""
unit[1]="I"
unit[2]="II"
unit[3]="III"
unit[4]="IV"
unit[5]="V"
unit[6]="VI"
unit[7]="VII"
unit[8]="VIII"
unit[9]="IX"

#Output Roman Equivalent
n=$1
q1=`expr $n / 1000`
a=`expr $n / 100`
q2=`expr $a % 10`
b=`expr $n / 10`
q3=`expr $b % 10`
q4=`expr $n % 10`

echo -n "${th[$q1]}"
echo -n "${hun[$q2]}"
echo -n "${ten[$q3]}"
echo -n "${unit[$q4]}"
echo

