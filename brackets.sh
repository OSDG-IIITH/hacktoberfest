#!/bin/bash

z=`echo $1 | sed 's/(/ /g' | sed 's/)/ /g' | tr -s " "`
echo -n "("
echo -n $z
echo -n ")"
echo
