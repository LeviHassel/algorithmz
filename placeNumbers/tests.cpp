#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <algorithm>
#include "placeNumbers.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream numbersFile( argv[1] );
  ifstream boxesFile( argv[2] );
 
  istream_iterator<int> nStart(numbersFile),nEnd;
  istream_iterator<bool> bStart(boxesFile),bEnd;
  
  vector<int> numbers(nStart,nEnd);
  vector<bool> boxes(bStart,bEnd);
  vector<int> order = placeNumbers( numbers , boxes );
  
  cout << "The order is..." << endl;
  for(int i = 0; i < boxes.size(); i++){
    cout << order[i] << endl;
    if( boxes[i] ){
      cout << "^" << endl;
    }
    else{
      cout << "v" << endl;
    }
  }
  cout << order[boxes.size()-1] << endl;
  return 0;
}
