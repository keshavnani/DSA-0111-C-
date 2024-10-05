#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        if (isPrime(number)) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
    return 0;
}

