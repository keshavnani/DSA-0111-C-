#include <iostream>
using namespace std;
int main() {
    int num, orginalNum, r, reversedNum = 0;
    cout << "Enter a number: ";
    cin >> num;
    orginalNum = num;
    while (num != 0) {
        r = num % 10;            
        reversedNum = reversedNum * 10 + r;  
        num /= 10;                       
    }
    if (orginalNum == reversedNum) {
        cout << orginalNum << " is a palindrome." << endl;
    } else {
        cout << orginalNum << " is not a palindrome." << endl;
    }
    return 0;
}

