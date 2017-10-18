#!/bin/bash

read sal
if [ $sal -gt 25000 ]
then
tax=$(bc <<< "scale=2; 3.6*$sal")
echo "TAX PAYMENT REQUIRED:$tax"
else
echo "NO TAX PAYMENT REQUIRED"
fi

