#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
   cout << "Enter a number (n): ";
   cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers using for loop is: " << sum << std::endl;
    return 0;
}

