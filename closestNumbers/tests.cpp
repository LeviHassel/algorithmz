#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm>
#include "closestNumbers.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream numbersFile( argv[1] );
  istream_iterator<double> nStart(numbersFile),nEnd;
  vector<double> numbers(nStart,nEnd);
  
  cout << closestNumbers( numbers ) << endl;

  return 0;
}
