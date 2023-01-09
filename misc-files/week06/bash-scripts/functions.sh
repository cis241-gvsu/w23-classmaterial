#! /usr/bin/env bash

# function definition
hello_world () {
    echo "hello world"
}

hello_world () {
    echo "hello world $1 it is an $2 day"
}

# calling the function
hello_world
hello_world Bob awful
hello_world Alice good
