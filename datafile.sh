#!/bin/bash

function readdata(){
	found=0
	if [ $1 == "eno" ]
	then
		cat employee.txt | ( while read data
		do
			number=`echo $data | cut -d',' -f1`
			if [ $number == $2 ]
			then
				echo $data
				found=1
			fi
		done
		f=$found )
	elif [ $1 == "ename" ]
	then
		cat employee.txt | ( while read data
                do
                        names=`echo $data | cut -d',' -f2`
                        if [ $names == $2 ]
                        then
                                echo $data
				found=1
                        fi
                done
		f=$found )

	elif [ $1 == "esalary" ]
	then
		cat employee.txt | ( while read data
                do
                        salary=`echo $data | cut -d',' -f3`
                        if [ $salary == $2 ]
                        then
                                echo $data
				found=1
                        fi
		done 
		f=$found )
	else
		echo "Invalid command"
	fi 
	if [[ $f == 0 ]]
	then
		echo "No such data exists"
	fi 
}

function writedata(){
	echo "$1,$2,$3" >> employee.txt
	echo "Done"
}

function updatedata(){
	found=0
	cat employee.txt | ( while read data
                do
                        number=`echo $data | cut -d',' -f1`
                        if [ $number != $1 ]
                        then
				echo $data >> mytempfile
			else
				echo $1,$2,$3 >> mytempfile
				found=1
                        fi
                done
		
	mv mytempfile employee.txt
	if [[ $found != 0 ]]
	then
		echo "Done"
	else
		echo "No such data exists"
	fi )
}

function deletedata(){
	found=0
	cat employee.txt | ( while read data
		do
			number=`echo $data | cut -d',' -f1`
			if [ $number != $1 ]
			then
				echo $data >> mytempfile
			else
				found=1
			fi
		done
	mv mytempfile employee.txt
	if [[ $found != 1 ]]
	then
		echo "No such data exists"
	else
		echo "Done"
	fi )
}

function duplicatedata(){
	cat employee.txt | sort -n | uniq -d
}

function findsalary(){

	line=`cat employee.txt | sort -t',' -u -n -r -k 3 | head -$1 | tail -1`

	salary=`echo $line | cut -d',' -f3`
	cat employee.txt | while read line
	do
		num=`echo $line | cut -d',' -f3`
		if [ $num == $salary ]
		then
			echo $line
		fi
	done
}
if [ ! -e employee.txt ]
then
	touch employee.txt
fi

if [ $1 == "read" ]
then
	readdata "$2" "$3"
elif [ $1 == "write" ]
then
	writedata "$2" "$3" "$4"
elif [ $1 == "update" ]
then
	touch mytempfile
	updatedata "$2" "$3" "$4"
elif [ $1 == "delete" ]
then
	touch mytempfile
	deletedata "$2"
elif [ $1 == "duplicate" ]
then
	duplicatedata
elif [ $1 == "nthsalary" ]
then
	findsalary "$2"
else
	echo "Not a valid argument !"
fi
