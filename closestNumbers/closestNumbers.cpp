#include <vector>
#include "closestNumbers.h"

using namespace std;

double closestNumbers( vector<double> numbers ){

  int tot = numbers.size()-1;
  double curDistance = 0;
  double minDistance = 0;

  //Iterate through all elements, finding the distance between them
  for(int i=0; i < tot; i++) {
      int n = i + 1;
	  for(n; n < tot; n++) {
          curDistance = numbers[n] - numbers[i];
          if((minDistance == 0)||(curDistance < minDistance)){
              minDistance = curDistance;
          }
	  }
  }
  
  return minDistance;
}
