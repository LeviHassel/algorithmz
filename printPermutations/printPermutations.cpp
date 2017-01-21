#include <string>
#include <iostream>
#include "printPermutations.h"

using namespace std;

/* Prints out all unique permutations of a given string in lexicographic (alphabetical) order */
void printPermutations( string word ){
    string wordi = word;                //Saves initial (alphabetic ordering) of string
    int i=0;                            //Starting index of word
    int n = word.length();              //Size of word
    int total = computeFactorial(n);    //Determines total necessary iterations

    while(i<total) {
        int k=i;
        word = wordi;
        for(int j=1; j<n; j++) {
            swap(word[k%(j+1)],word[j]);
            k = k/(j+1);
        }
        cout << word << endl;
        i++;
    }

    return;
}

/* Switches given two characters */
void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* Calculates factorial of given integer */
int computeFactorial(int n){
    int i, j=1;

    for(i = 1; i <= n; i++) {
        j = j * i;
    }
    return j;
}