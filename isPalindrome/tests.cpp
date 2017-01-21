#include <iostream>
#include <string>
#include "isPalindrome.h"
using namespace std;

int main(){
  string str = "racecar";
  
  if( isPalindrome( str ) ){
    cout << "IT'S A PALINDROME!" << endl;
  }
  else{
    cout << "IT'S NOT A PALINDROME" << endl;
  }

  return 0;
}
