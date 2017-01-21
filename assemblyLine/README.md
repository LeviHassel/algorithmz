# assemblyLine

## Overview
assemblyLine is a function that will compute the shortest time possible to pass through n stages of assembling a product. The function will be supplied with two (2) vectors of length n and two vectors of length n-1. The vectors of length n will represent the time required to complete each stage of assembly on one of two assembly lines. The vectors of length n-1 will represent the time required to move a partially completed product from one assembly line to the other after a given stage. It can be assumed that the time required to move from one stage to the next on the same assembly line is 0. The function should return the minimum time required to go from stage 1, through stage n, in assembling a product.

## Requirements
This can be run on any system with **g++** (included in GCC, the GNU Compiler Collection) or with any IDE that supports C++, though my directions on how to run it are for the former.

## How to Run
Download the code and navigate to the directory.

Compile the program with the command (note that you can name `run.me` whatever you choose):
`g++ -o run.me *.cpp`

Run the executable with this command:
`./run.me test1.times1.input test1.times2.input test1.transfers1To2.input test1.transfers2To1.input`

If you wish to change the input, simply edit *test1.times1.input*, *test1.times2.input*, *test1.transfers1To2.input* or *test1.transfers2To1.input*.

## References
https://gcc.gnu.org/