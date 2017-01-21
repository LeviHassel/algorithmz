#include <vector>
#include "hornerEval.h"

using namespace std;

int hornerEval( vector<int> coeffs, int val, int n){

    int hrnr = 0;

    for(int i=0; i<n; i++) {
        hrnr = (val * hrnr) + coeffs[i];
    }

    return hrnr;
}