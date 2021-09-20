#include <iostream>
using namespace std;

// Write a function that returns true if a given string is a palindrome, and false, if it is not.

bool isPalindrome(string txt){

  int j = txt.length()-1;
  for(int i=0; i!=j; i++){
    if(txt[i] == txt[j]) j--;
    else{
      cout<<txt + " is NOT a palindrome!\n\n";
      return false;
    }
  }
  cout<<txt + " IS a palindrome!\n\n";
  return false;

}

int main(){
  string input;
  while(input != "break"){
    cout<<"Enter a word to see if it is a palindrome: ";
    cin>>input;
    if(input == "break") break;
    isPalindrome(input);
  }

}
