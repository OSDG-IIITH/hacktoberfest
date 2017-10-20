#!bin/bash
n=$1
t=30
ping -c $n "google.com" | while read ping
do
	/bin/echo -e "\e[1;$(echo $t)m$(date):$ping\e[0m"
	t=`expr $t + 1`

	if [ $t -eq 38 ]
	then
		t=30
	fi
done
