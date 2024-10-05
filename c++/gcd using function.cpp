#include <iostream>
using namespace std;
int findgcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    int gcd = findgcd(num1, num2);
    cout << "gcd of " << num1 << " and " << num2 << " is: " << gcd << endl;
    return 0;
}


