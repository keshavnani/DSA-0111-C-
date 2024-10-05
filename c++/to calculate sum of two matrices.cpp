#include <iostream>
#include <cmath>
unsigned long long factorial(int n) {
    if (n < 0) return 0; 
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
double factorial(double n) {
    if (n < 0) return 0; 
    if (n == 0 || n == 1) return 1; 
    double result = 1;
    for (double i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    int intNum = 5;
    double floatNum = 5.0;
    std::cout << "Factorial of integer " << intNum << " is " << factorial(intNum) << std::endl;
    std::cout << "Factorial of floating-point number " << floatNum << " is " << factorial(floatNum) << std::endl;
    return 0;
}

