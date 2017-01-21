#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "maximumST.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream matrixFile( argv[1] );
  istream_iterator<double> mStart(matrixFile),mEnd;
  vector<double> matrixArray(mStart,mEnd);

  int dimensions = (int)(sqrt( matrixArray.size() ));
  vector<double> row(dimensions,0);
  vector< vector<double> > matrix(dimensions,row);

  for( int i = 0; i < dimensions; i++ ){
    for( int j = 0; j < dimensions; j++ ){
      matrix[j][i] = matrixArray[j*dimensions+i];
    }
  }
  
  cout << "Maximum spanning tree value: " << maximumST( matrix );
  cout << endl;
  return 0;
}
