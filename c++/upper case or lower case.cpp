#include <iostream>
#include <cctype>  
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (isupper(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    }
    else if (islower(ch)) {
        cout << ch << " is a lowercase letter." << endl;
    }
    return 0;
}

