#!/bin/bash
k=$1
while [ $k -ge 1000 ]
do
	echo -n "M"
	k=$(($k-1000))
done
if [ $k -ge 900 ]
then
	echo -n "CM"
	k=$(($k-900))
elif [ $k -ge 500 ]
then
	echo -n "D"
	k=$(($k-500))
	while [ $k -ge 100 ]
	do
		echo -n "C"
		k=$(($k-100))
	done
elif [ $k -ge 400 ]
then
	echo -n "CD"
	k=$(($k-400))
fi
while [ $k -ge 100 ]
do
                echo -n "C"
                k=$(($k-100))
done
if [ $k -ge 90 ]
then
	echo -n "XC"
	k=$(($k-90))
elif [ $k -ge 50 ]
then
        echo -n "L"
        k=`expr $k - 50`
        while [ $k -ge 10 ]
        do
                echo -n "X"
                k=$(($k-10))
        done
elif [ $k -ge 40 ]
then
        echo -n "XL"
        k=$(($k-40))
fi
while [ $k -ge 10 ]
do
                echo -n "X"
                k=$(($k-10))
done
if [ $k -ge 9 ]
then
        echo -n "IX"
        k=$(($k-9))
elif [ $k -ge 5 ]
then
        echo -n "V"
        k=$(($k-5))
        while [ $k -ge 1 ]
        do
                echo -n "I"
                k=$(($k-1))
        done
elif [ $k -ge 4 ]
then
        echo -n "IV"
        k=$(($k-4))
fi
while [ $k -ge 1 ]
do
                echo -n "I"
                k=$(($k-1))
done
echo
