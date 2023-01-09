#! /usr/bin/env bash

# Variables
mynum=5
mynum2=2
mycolor=orange
mymsg="my number is $mynum"

echo $mynum
echo $mycolor
echo $mymsg
echo $mynum2

# Arithmetic Expansion
echo "1+1 = $((1+1))"
echo $((mynum+mynum2))
mysum=$((mynum-mynum2))
echo "my sub is $mysum"
