#include <iostream>
using namespace std;
double calculateArea(double radius) {
    const double PI = 3.14159; 
    return PI * radius * radius; 
}
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = calculateArea(radius);
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    return 0;
}

