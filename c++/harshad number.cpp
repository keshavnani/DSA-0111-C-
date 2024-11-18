#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    if (num % sum == 0)
        cout << " it is a Harshad Number." << endl;
    else
        cout << " it is not a Harshad Number." << endl;
    return 0;
}
  b     
