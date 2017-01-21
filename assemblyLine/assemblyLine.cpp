#include <vector>
#include "assemblyLine.h"

using namespace std;

/*
Input: *Two vectors of length n (time required to complete each stage of assembly on one of two assembly lines)
	   *Two vectors of length n−1 (time required to move a partially completed product from one assembly line to the other after a given stage)
Output: The function should return the minimum time required to go from stage 1, through stage n, in assembling a product.
Note: The time required to move from one stage to the next on the same assembly line is 0
*/
int assemblyLine(vector<int> times01, vector<int> times02, vector<int> switches01, vector<int> switches02) {

  int minTotalTime = 0;
  int n = times01.size();
  int curAss = 0;

  if(times01[0] <= times02[0]) {
    minTotalTime = times01[0];
    curAss = 1;
  }
  else {
    minTotalTime = times02[0];
    curAss = 2;
  }

  for(int i = 1; i < n; i++) {
	if(curAss == 1)  {
      if(times01[i] <= (times02[i] + switches01[i-1])) {
        minTotalTime = minTotalTime + times01[i];
        curAss = 1;
      }
      else {
        minTotalTime = minTotalTime + times02[i] + switches01[i-1];
        curAss = 2;
      }
    }
    else if(curAss == 2)  {
      if(times02[i] <= (times01[i] + switches02[i-1])) {
        minTotalTime = minTotalTime + times02[i];
        curAss = 2;
      }
      else {
        minTotalTime = minTotalTime + times01[i] + switches02[i-1];
        curAss = 1;
      }
    }
  }
  
  return minTotalTime;
}