#include <vector>
#include "placeNumbers.h"

using namespace std;

vector<int> placeNumbers( vector<int> numbers, vector<bool> signs){

    vector<int> boxes = numbers;
    int n = numbers.size()-1;
    int j = 0;
    int k = 0;

    //establish if first element is largest or smallest
    if(signs[0] == 1) {
        boxes[0]= numbers[k];
        k++;
    }
    if(signs[0] == 0) {
        boxes[0]= numbers[n-j];
        j++;
    }

    //Loop through numbers, filling in the spots with working numbers
    for(int i=0; i<n; i++) {
        if(((signs[i] == 1)&&(signs[i+1] == 1))||((signs[i] == 0)&&(signs[i+1] == 1))) {
            boxes[i+1]= numbers[k];
            k++;
        }

        if(((signs[i] == 0)&&(signs[i+1] == 0))||((signs[i] == 1)&&(signs[i+1] == 0))) {
            boxes[i+1]= numbers[n-j];
            j++;
        }
    }

  return boxes;
}