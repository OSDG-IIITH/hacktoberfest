#!/bin/bash
##read number
number=$1
decimal=(1000 900 500 400 100 90 50 40 10 9 5 4 1)
symbol=(M CM D CD C XC L XL X IX V IV I)
i=0
while [ $number != 0 ]
do
	while [ $((number/decimal[$i])) != 0 ] && [ $decimal[$i] != 0 ]
	do
		printf ${symbol[$i]}
		number=$((number - decimal[$i]))
	done
	i=$((i+1))
done
printf "\n"
