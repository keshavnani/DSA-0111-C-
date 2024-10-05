#include <iostream>
using namespace std;
class Compare {
private:
    int num1, num2; 
public:
    void readNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }
    void checkEquality() {
        if (num1 == num2) {
            cout << "The numbers are equal." << endl;
        } else {
            cout << "The numbers are not equal." << endl;
        }
    }
};
int main() {
    Compare compare;   
    compare.readNumbers();  
    compare.checkEquality(); 
    return 0;
}

