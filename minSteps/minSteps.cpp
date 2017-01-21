#include <vector>
#include "minSteps.h"

using namespace std;

/*
Input: Vector of integers (stride lengths) and an integer (exact distance to cover)
Output: Minimum number of steps needed to travel that exact distance
Note: Vector of stride lengths will be in ascending order of length
*/
int minSteps( vector<int> strideLength , int distance ){

  int n = strideLength.size() - 1;
  int totalSteps = 0;
  int totalDist = 0;
  int lastSteps = 100;

  for(int i=0; totalDist < distance; i++){
    for(int j=0; j <= n; j++){
      if((totalDist + strideLength[n-j]) <= distance) {
        totalDist = totalDist + strideLength[n - j];
        totalSteps++;
        j = n + 1;

        for(int k=0; k <= n; k++) {
          for (int m = 0; m <= n; m++) {
            if ((totalDist + strideLength[n - k]) == distance) {
              lastSteps = 1;
            }
            else if ((totalDist + strideLength[n - k] + strideLength[n - m]) == distance) {
              if(lastSteps > 2) {
                lastSteps = 2;
              }
            }
            else if ((totalDist + strideLength[n - k] + strideLength[n - m] + strideLength[n - m]) == distance) {
              if(lastSteps > 3) {
                lastSteps = 3;
              }
            }
          }
        }

        if(lastSteps != 100){
          totalDist = distance;
          totalSteps = totalSteps + lastSteps;
        }
      }
    }
  }

  return totalSteps;
}