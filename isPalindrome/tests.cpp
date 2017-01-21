#include <iostream>
#include <string>
#include "isPalindrome.h"
using namespace std;

int main(){
  string str = "racecar";
  
  if( isPalindrome( str ) ){
    cout << "A PALINDROME!" << endl;
  }
  else{
    cout << "NOT A PALINDROME" << endl;
  }

  return 0;
}
