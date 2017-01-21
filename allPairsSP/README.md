# allPairsSP

## Overview
allPairsSP is a function that takes an n x n vector (representing the adjacency matrix of a graph) and a value i between 1 and n as input and returns the n x n vector representing the matrix computed after the ith stage of ![Floyd's algorithm](https://en.wikipedia.org/wiki/Floyd%E2%80%93Warshall_algorithm "Floyd's algorithm"). For the purposes of this program, infinity will be represented as -1.

## Requirements
This can be run on any system with **g++** (included in GCC, the GNU Compiler Collection) or with any IDE that supports C++, though my directions on how to run it are for the former.

## How to Run
Download the code and navigate to the directory.

Compile the program with the command: `g++ -o run.me *.cpp` (note that you can name `run.me` whatever you choose)

Run the executable with this command:
`./run.me test1.matrix.input test1.i.input`

If you wish to change the input, simply edit *test1.matrix.input* or *test1.i.input*.

## References
https://gcc.gnu.org/