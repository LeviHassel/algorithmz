#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "assemblyLine.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream time01File( argv[1] );
  istream_iterator<int> t01Start(time01File),t01End;
  vector<int> time01(t01Start,t01End);

  ifstream time02File( argv[2] );
  istream_iterator<int> t02Start(time02File),t02End;
  vector<int> time02(t02Start,t02End);

  ifstream transfer01To02File( argv[3] );
  istream_iterator<int> tr01T02Start(transfer01To02File),tr01T02End;
  vector<int> transfer01To02(tr01T02Start,tr01T02End);

  ifstream transfer02To01File( argv[4] );
  istream_iterator<int> tr02T01Start(transfer02To01File),tr02T01End;
  vector<int> transfer02To01(tr02T01Start,tr02T01End);

  cout << "The fastest assembly will require " << assemblyLine( time01 , time02 , transfer01To02 , transfer02To01 ) << " seconds" << endl;
  
  return 0;
}
