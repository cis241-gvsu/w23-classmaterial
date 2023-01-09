#! /usr/bin/env bash

# Loops

for val in  0 1 2 3 4
do
    echo $val
done

for color in orange green blue yellow
do
    echo $color
done

for val in {1..11..2}
do
    echo $val
done

# Loop through argument array
for arg in $@
do
    echo $arg
done

# While loop
num=3
while [ $num -gt 0 ];
do
    echo $num
    num=$((num-1))
done

# While loop to shift through input
while (($# > 0))
do
    echo "$1, $#"
    shift
done
