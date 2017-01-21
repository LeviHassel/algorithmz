# maxProfit

## Overview
maxProfit is a function that, given a vector of n execution times (in seconds), n deadlines (in seconds), and n profits (in dollars) for on-time completion, should return the greatest profit for executing the n jobs, given these constraints: once started, a job must run to completion. If a job is completed after its deadline, its profit is $0. You want to schedule the jobs in a way that maximizes the profit.

## Requirements
This can be run on any system with **g++** (included in GCC, the GNU Compiler Collection) or with any IDE that supports C++, though my directions on how to run it are for the former.

## How to Run
Download the code and navigate to the directory.

Compile the program with the command: `g++ -o run.me *.cpp` (note that you can name `run.me` whatever you choose)

Run the executable with this command:
`./run.me test1.times.input test1.deadlines.input test1.profits.input`

If you wish to change the input, simply edit *test1.times.input*, *test1.deadlines.input* or *test1.profits.input*.

## References
https://gcc.gnu.org/