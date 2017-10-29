#!/bin/bash
colour=2
tput setaf $colour
IFS=$'\n'
for ping in `ping -c $1 www.google.com | while read output; do echo "$(date)-- $output";done`
do
	echo $ping
	((colour++))
	if [ $colour -gt 11 ]
	then
		colour=$((colour-10))
	fi
	tput setaf $colour
done
