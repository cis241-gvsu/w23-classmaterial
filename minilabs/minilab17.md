# Minilab 17

The point of this minilab is to practice with:
* header files
* switch statements

## Part 1:
Create a file `operation.c` and a header file `operation.h`
The C file should have one function `perform_op(double a, double b, char op)`

This function should check whether `op` is `+`, `-`, `*`, or `/`
using a switch statement and perform the resulting operation between
`a` and `b` and print the output.

The header file should contain the function prototype

## Part 2:
Create another file with your main function that initializes variables and
calls the `perform_operation` function.

## Part 3 (optional):
Modify your main file to accept two numbers and a character as input from the user.
For instance, as:
```
4.4 3.0
+
```
