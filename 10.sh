#!/bin/bash
l=`cut ":" -f 1 /etc/passwd | wc -l`
m=`who | wc -l`
echo "$m OUT OF $l USERS ARE ONLINE RIGHT NOW"
