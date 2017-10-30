#!/bin/bash
read var
echo -n "("
echo -n "$var" | tr -d "(" | tr -d ")"
echo ")"