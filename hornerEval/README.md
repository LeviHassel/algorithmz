# hornerEval

## Overview
hornerEval takes three arguments: a vector of integers, an integer, and another integer. The vector of integers represents polynomial coefficients and the first integer is a value to evaluate the polynomial at. The second integer i is how far Horner's Rule should be used in evaluating the polynomial at the given location. The integer returned is the value of the polynomial at the specific value (given the number of evaluations). As an example, evaluating 2(x^4) - x^3 + 3(x^2) + x - 5 for x = 3 and i = 4 would return 55, since the fourth entry in the table would be 55. This function assumes that i is less than or equal to the length of the vector of coefficients.

## Requirements
These can be run on a Linux system with **g++**.

## How to Run
Compile the code with the command:
`g++ -o /path/to/executable.out /path/to/source/files/*.cpp`

And then run the executable.