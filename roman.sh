#!/bin/bash
if [ $1 -ge 1000 ]
        then
                c=$(($1/1000))
                for((i=0;i<$c;i++))
                        do
                                echo -n M
                        done
fi
rem=$(($1%1000))
if [ $rem -ge 900 ]
  then
                echo -n CM 
		rem=$(($rem%900))
elif [ $rem -ge 500 ]
  then
                echo -n D
                rem=$(($rem%500))
elif [ $rem -ge 400 ]
  then
                echo -n CD
                rem=$(($rem%400))
fi

if [ $1 -ge 100 ]
        then
                c=$(($rem/100))
                for((i=0;i<$c;i++))
                        do
                                echo -n C
                        done
fi
rem=$(($1%100))
if [ $rem -ge 90 ]
  then
                echo -n XC
		rem=$(($rem%90))
elif [ $rem -ge 50 ]
  then
                echo -n L
                rem=$(($rem%50))
elif [ $rem -ge 40 ]
  then
                echo -n XL
                rem=$(($rem%40))
fi

if [ $1 -ge 10 ]
        then
                c=$(($rem/10))
                for((i=0;i<$c;i++))
                        do
                                echo -n X
                        done
fi
rem=$(($1%10))
if [ $rem -ge 9 ]
  then
                echo -n IX 
		rem=$(($rem%9))
elif [ $rem -ge 5 ]
  then
                echo -n V
                rem=$(($rem%5))
elif [ $rem -ge 4 ]
  then
                echo -n IV
                rem=$(($rem%4))
fi

if [ $rem -ge 1 ]
then
                for((i=0;i<$rem;i++))
                        do
                                echo -n I
                        done
fi
echo

