#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double number;
    cout << "Enter a floating-point number: ";
    cin >> number;
    double lower = floor(number);
    double upper = ceil(number);
    int rounded = (number - lower < upper - number) ? static_cast<int>(lower) : static_cast<int>(upper);
    cout << "The number rounded to the nearest integer is: " << rounded << endl;
    return 0;
}

