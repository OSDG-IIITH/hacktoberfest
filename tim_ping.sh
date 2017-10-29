#!/bin/bash

for ((i=0; i<$1; i++))
do
	ping google.com | xargs -L 1 -I '{}' date '+%+: {}'
done
