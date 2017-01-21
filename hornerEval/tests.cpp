#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include "hornerEval.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream numbersFile( argv[1] );
  istream_iterator<int> nStart(numbersFile),nEnd;
  vector<int> numbers(nStart,nEnd);

  ifstream valFile( argv[2] );
  istream_iterator<int> vStart(valFile),vEnd;
  vector<int> val(vStart,vEnd);

  ifstream nFile( argv[3] );
  istream_iterator<int> n2Start(nFile),n2End;
  vector<int> n(n2Start,n2End);
  
  cout << hornerEval( numbers , val[0] , n[0] ) << endl;
 
  return 0;
}
