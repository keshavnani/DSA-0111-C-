#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    string result = (num1 == num2) ? "Numbers are equal" : "Numbers are not equal";
    cout << result << endl;
    return 0;
}

