#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string& str) {
    int start = 0;
    int end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}
int main() {
    string inputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);
    if (isPalindrome(inputStr)) {
        cout << "The string \"" << inputStr << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << inputStr << "\" is not a palindrome." << endl;
    }
    return 0;
}

