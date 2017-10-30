#!/bin/bash -i
HISTFILE=~/.bash_history
set -o history
history | tr -s " " | cut -d ' ' -f 3 | sort | uniq -c | sort -nr
