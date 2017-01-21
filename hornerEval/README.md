# hornerEval

## Overview
hornerEval takes three arguments: a vector of integers, an integer, and another integer. The vector of integers represents polynomial coefficients and the first integer is a value to evaluate the polynomial at. The second integer i is how far Horner's Rule should be used in evaluating the polynomial at the given location. The integer returned is the value of the polynomial at the specific value (given the number of evaluations). As an example, evaluating 2(x^4) - x^3 + 3(x^2) + x - 5 for x = 3 and i = 4 would return 55, since the fourth entry in the table would be 55. This function assumes that i is less than or equal to the length of the vector of coefficients.

## Requirements
This can be run on any system with **g++** (included in GCC, the GNU Compiler Collection) or with any IDE that supports C++, though my directions on how to run it are for the former.

## How to Run
Download the code and navigate to the directory.

Compile the program with the command: `g++ -o run.me *.cpp` (note that you can name `run.me` whatever you choose)

Run the executable with this command:
`./run.me test1.coeffs.input test1.n.input test1.value.input`

If you wish to change the input, simply edit *test1.coeffs.input*, *test1.n.input* or *test1.value.input*.

## References
https://gcc.gnu.org/