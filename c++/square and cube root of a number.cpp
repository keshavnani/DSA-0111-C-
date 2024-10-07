#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number; 
    double squareRoot = sqrt(number);  
    double cubeRoot = cbrt(number);   
    cout << "Square root of " << number << " is: " << squareRoot << std::endl;
    cout << "Cube root of " << number << " is: " << cubeRoot << std::endl;
    return 0;
}

