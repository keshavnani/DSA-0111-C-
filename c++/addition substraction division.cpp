#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } 
    return 0;
}
