#!/bin/bash
read num
i=0
while [[ num -gt 0 ]]
do
	if [ $num -ge 1000 ]
	then
		arr[$i]='M'
		i=$((i+1))
		num=$((num-1000))
	elif [ $num -ge 500 ]
	then
		if [ $num -ge 900 ]
		then
			arr[$i]='C'
			i=$((i+1))
			arr[$i]='M'
                        i=$((i+1))
			num=$((num-900))
		else
			 arr[$i]='D'
                         i=$((i+1))
			 num=$((num-500))
		fi
	elif [ $num -ge 100 ]
	then
		if [ $num -ge 400 ]
		then
			 arr[$i]='c'
                         i=$((i+1))
			 arr[$i]='D'
                         i=$((i+1))
                         num=$((num-400))
		else
			 arr[$i]='C'
                         i=$((i+1))
                         num=$((num-100))
		fi
	elif [ $num -ge 50 ]
	then
		if [ $num -ge 90 ]
		then
			arr[$i]='X'
                        i=$((i+1))
                        arr[$i]='C'
                        i=$((i+1))
                        num=$((num-90))
		else
			arr[$i]='L'
                        i=$((i+1))
                        num=$((num-50))
		fi
	elif [ $num -ge 9 ]
	then 
		if [ $num -ge 9 ]
		then
			if [ $num -ge 40 ]
			then
				arr[$i]='X'
                     	        i=$((i+1))
                       		arr[$i]='L'
         	                i=$((i+1))
  	                        num=$((num-40))
			elif [ $num -eq 9 ]
			then 
				arr[$i]='I'
                                i=$((i+1))
              		        arr[$i]='X'
        	                i=$((i+1))
	                        num=$((num-9))
			else
				arr[$i]='X'
                    		i=$((i+1))
                       		num=$((num-10))
			fi
		fi
	elif [ $num -ge 4 ]
	then 
		if [ $num -ge 5 ]
		then 
			arr[$i]='V'
                        i=$((i+1))
                        num=$((num-5))
		else
			arr[$i]='I'
                        i=$((i+1))
			arr[$i]='X'
                        i=$((i+1))
                        num=$((num-4))
		fi
	else
		arr[$i]='I'
                num=$((num-1))
		i=$((i+1))

	fi
done
echo ${arr[@]} | tr -d " " 








		
		
	
