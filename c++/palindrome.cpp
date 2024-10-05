#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int start = 0, end;
    cout << "Enter a string: ";
    cin >> str;
    end = str.length() - 1;
    bool isPalindrome = true;
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}

