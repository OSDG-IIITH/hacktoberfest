#!/bin/bash
crontab $1 2>/dev/null 1>/dev/null
if [ $? -eq 0 ] 
then
echo "Yes"
else
echo "No"
fi
 
