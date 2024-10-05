#include <iostream>
#include <string>
using namespace std;
int countCharacters(const string& str) {
    return str.length(); 
}
int main() {
    string inputStr;
    cout << "Enter a string: ";
    getline(cin, inputStr);
    int count = countCharacters(inputStr);
    cout << "The number of characters in the string is: " << count << endl;
    return 0;
}

