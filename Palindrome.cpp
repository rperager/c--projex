#include <iostream>
using namespace std;

// Write a function that returns true if a given number is a palindrome, and false, if it is not.

bool isPalindrome(int x) {
    std::string original = std::to_string(x);
    string reversed = "";

    for(int i=original.length()-1; i>=0; i--){
        reversed += original[i];
    }  
  
    if(original == reversed){
        return true;
    }else{
        return false;
    }

    return false;

}

int main() {
    int n;
    cout << "A palindrome is a number or word that is the same forwards as it is backwards.\n";
    cout << "Please input a number to test if it is a palindrome: ";
  
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}
