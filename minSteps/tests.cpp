#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "minSteps.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream stepsFile( argv[1] );
  istream_iterator<int> sStart(stepsFile),sEnd;
  vector<int> step(sStart,sEnd);

  ifstream distanceFile( argv[2] );
  istream_iterator<int> dStart(distanceFile),dEnd;
  vector<int> distance(dStart,dEnd);

  cout << distance[0] << " feet can be covered in " << minSteps( step , distance[0] ) << " steps" << endl;
  
  return 0;
}
