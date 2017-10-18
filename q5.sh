#!/bin/bash

cat to_replace.txt | tr "\n" " " | xargs -d ' ' -n 1 -I{} mv {}.txt {}{}.txt
