#!/bin/bash
a=31
ping -c$1 google.com | while read p; do echo -e "\033[0;${a}m`date` -- $p\033[0m"; if [ $a -lt 37 ] ; then a=$((a+1)); else a=31 ; fi ; done
#colorful ping
