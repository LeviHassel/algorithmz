# minSteps

## Overview
minSteps is a function that, given a vector of integer values (representing stride lengths) and an integer (representing an exact distance to cover), returns the minimum number of steps needed to travel that exact distance. It can be assumed that the vector of stride lengths will be provided in ascending order of length.

## Requirements
This can be run on any system with **g++** (included in GCC, the GNU Compiler Collection) or with any IDE that supports C++, though my directions on how to run it are for the former.

## How to Run
Download the code and navigate to the directory.

Compile the program with the command (note that you can name `run.me` whatever you choose):
`g++ -o run.me *.cpp`

Run the executable with this command:
`./run.me test1.strides.input test1.distance.input`

If you wish to change the input, simply edit *test1.strides.input* or *test1.distance.input*.

## References
https://gcc.gnu.org/