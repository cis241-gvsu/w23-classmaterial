#! /usr/bin/env bash

# Array creation
simple_arr=(hello world)
simple_arr2=(1 2 3)

arr_ex2[2]=hello
arr_ex2[3]=world
arr_ex2[0]=sunny

# accessing array elements
echo ${simple_arr[0]}
echo ${simple_arr[1]}
echo ${arr_ex2[1]}

# array indices
echo "array indices"
echo ${!arr_ex2[@]}

# number of items
echo "number of items"
echo ${#arr_ex2[@]}

# concatenating arrays
arr_ex3=(
    snowy
    icy
    cold
)
arr_ex3+=(sunny hot rainy)
echo ${arr_ex3}
echo ${arr_ex3[5]}

# slicing
echo ${arr_ex3[@]:2:3}

# array of all elements
echo ${arr_ex3[@]}

# string representation of array
echo ${arr_ex3[*]}


# Associative arrays
declare -A aarr
aarr=(
    [rainy]=6
    [cloudy]=7
    [warm]=1
)
echo "---start associative---"

# getting array indices
echo ${!aarr[@]}

# looping through associative array
for key in ${!aarr[@]}
do
    echo "$key has value ${aarr[$key]}"
done
