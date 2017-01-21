#include <string>
#include <iostream>
#include "isPalindrome.h"

using namespace std;

/* Input: string
 * Output: boolean; true if the word is a palindrome (read the same forwards as backwards), false otherwise */
bool isPalindrome(string word){

	int i=0;
	int j=word.length()-1;

	//A single character is a palindrome by definition
	if (word.length()<2) {
    	return true;
    }

	//This checks if it's a palindrome by closing in on both sides
    while(word[i] == word[j]) {
		if(i==j||i==(j+1)) {
    		return true;
    	}
		i++;
		j--;
    }

    //Otherwise
    return false;
}