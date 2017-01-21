#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include <cmath>
#include "allPairsSP.h"
using namespace std;

int main(int argc , char* argv[]){
  
  ifstream matrixFile( argv[1] );
  istream_iterator<double> mStart(matrixFile),mEnd;
  vector<double> matrixArray(mStart,mEnd);

  ifstream iFile( argv[2] );
  istream_iterator<int> iStart(iFile),iEnd;
  vector<int> iArray(iStart,iEnd);

  int dimensions = (int)(sqrt( matrixArray.size() ));
  vector<double> row(dimensions,0);
  vector< vector<double> > matrix(dimensions,row);

  for( int i = 0; i < dimensions; i++ ){
    for( int j = 0; j < dimensions; j++ ){
      matrix[j][i] = matrixArray[j*dimensions+i];
    }
  }
  
  vector<vector<double> > sp = allPairsSP( matrix , iArray[0] );
  
  for( int i = 0; i < dimensions; i++ ){
    for( int j = 0; j < dimensions - 1; j++ ){
      cout << sp[i][j] << " ";
    }
    cout << sp[i][dimensions-1] << endl;
  }
  return 0;
}
