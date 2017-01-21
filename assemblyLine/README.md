# assemblyLine

## Overview
assemblyLine is a function that will compute the shortest time possible to pass through n stages of assembling a product. The function will be supplied with two (2) vectors of length n and two vectors of length n-1. The vectors of length n will represent the time required to complete each stage of assembly on one of two assembly lines. The vectors of length n-1 will represent the time required to move a partially completed product from one assembly line to the other after a given stage. It can be assumed that the time required to move from one stage to the next on the same assembly line is 0. The function should return the minimum time required to go from stage 1, through stage n, in assembling a product.

## Requirements
These can be run on a Linux system with **g++**.

## How to Run
Compile the code with the command:
`g++ -o /path/to/executable.out /path/to/source/files/*.cpp`

And then run the executable.