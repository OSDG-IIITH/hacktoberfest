#!/bin/bash
declare -a u=(' ' 'I' 'II' 'III' 'IV' 'V' 'VI' 'VII' 'VIII' 'IX')
declare -a t=(' ' 'X' 'XX' 'XXX' 'XL' 'L' 'LX' 'LXX' 'LXXX' 'XC')
declare -a h=(' ' 'C' 'CC' 'CCC' 'CD' 'D' 'DC' 'DCC' 'DCCC' 'CM')
declare -a th=(' ' 'M' 'MM' 'MMM')
read num
rem=$(($num % 10))
if [ $rem -lt 10 ] && [ $rem -ne 0 ] && [ $num -ne 0  ]
then    
        ru=${u[$rem]}
fi
num=$(($num - $rem))
rem=$(($num % 100))
if [ $rem -lt 100 ] && [ $rem -ne 0 ] && [ $num -ne 0  ] 
then
        rt=${t[$(($rem / 10))]}
fi
num=$(($num - $rem))
rem=$(($num % 1000))
if [ $rem -lt 1000 ] && [ $rem -ne 0 ] && [ $num -ne 0  ]
then
        rh=${h[$(($rem / 100))]}
fi
num=$(($num - $rem))
rem=$(($num % 10000))
if [ $rem -lt 10000 ] && [ $rem -ne 0 ] && [ $num -ne 0  ]
then
        rth=${th[$(($rem / 1000))]}
fi

echo $rth$rh$rt$ru
