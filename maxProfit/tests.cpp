#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm>
#include "maxProfit.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream timesFile( argv[1] );
  istream_iterator<int> tStart(timesFile),tEnd;
  vector<int> time(tStart,tEnd);

  ifstream deadlinesFile( argv[2] );
  istream_iterator<int> dStart(deadlinesFile),dEnd;
  vector<int> deadline(dStart,dEnd);

  ifstream profitFile( argv[3] );
  istream_iterator<int> pStart(profitFile),pEnd;
  vector<int> profit(pStart,pEnd);
 
  cout << "At most, $" << maxProfit( time , deadline , profit ) << " can be made" << endl;
 
  return 0;
}
