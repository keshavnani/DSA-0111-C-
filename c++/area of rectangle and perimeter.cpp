#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h = 0, double w = 0) : height(h), width(w) {}
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double calculateArea() {
        return height * width;
    }
    double calculatePerimeter() {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double calculateArea() {
        return (height * width) / 2;
    }
    double calculatePerimeter() {
        double hypotenuse = sqrt((height * height) + (width * width) / 4);
        return 2 * hypotenuse + width;
    }
};
int main() {
    Rectangle rect(10, 20);
    cout << "Rectangle Area: " << rect.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rect.calculatePerimeter() << endl;
    Triangle tri(10, 20);
    cout << "Triangle Area: " << tri.calculateArea() << endl;
    cout << "Triangle Perimeter: " << tri.calculatePerimeter() << endl;
    return 0;
}

