# placeNumbers

## Overview
placeNumbers is a function that takes a vector of n integers and a vector of n-1 Boolean values as input and returns a vector of n integers. placeNumbers returns an ordering of the numbers such that the conditions encoded in the vector of Boolean values are met. A value in the Boolean vector is true if the number that would be to its left is less than the right that would be to its right, and false otherwise. This function assumes that the vector is in ascending order.

## Requirements
This can be run on any system with **g++** (included in GCC, the GNU Compiler Collection) or with any IDE that supports C++, though my directions on how to run it are for the former.

## How to Run
Download the code and navigate to the directory.

Compile the program with the command (note that you can name `run.me` whatever you choose):
`g++ -o run.me *.cpp`

Run the executable with this command:
`./run.me test1.numbers.input test1.boxes.input`

If you wish to change the input, simply edit *test1.numbers.input* or *test1.boxes.input*.

## References
https://gcc.gnu.org/