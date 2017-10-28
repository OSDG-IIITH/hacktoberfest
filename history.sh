#!/bin/bash

cat ~/.bash_history | cut -d " " -f 1 | sort | uniq -c | sort -rn | sed -r 's/\W+(\w*)(.*)/\2\t\1/'

