#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
float add(float a, float b) {
    return a + b;
}
int main() {
    int int1 = 5, int2 = 10, int3 = 15;
    float float1 = 4.5, float2 = 6.7;
    cout << "Adding two integers: " << add(int1, int2) << endl;           
    cout << "Adding three integers: " << add(int1, int2, int3) << endl;   
    cout << "Adding two floats: " << add(float1, float2) << endl;         
    return 0;
}

