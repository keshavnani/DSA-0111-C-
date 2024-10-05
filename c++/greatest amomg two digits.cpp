#include <iostream>
using namespace std;
int main() {
    int number1, number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;
    if (number1 > number2) {
        cout << number1 << " is the greatest." << endl;
    } else if (number2 > number1) {
        cout << number2 << " is the greatest." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }
    return 0;
}
   
