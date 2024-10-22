#include <iostream>
using namespace std;

// Function to return the sum of the squares of digits of the number
int sumOfSquaresOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

// Function to check if the number is a Happy Number using Floyd's Cycle Detection Algorithm
bool isHappyNumber(int num) {
    int slow = num;
    int fast = sumOfSquaresOfDigits(num);
    
    // Loop until the fast pointer either reaches 1 or meets the slow pointer (cycle detected)
    while (fast != 1 && slow != fast) {
        slow = sumOfSquaresOfDigits(slow);              // Move slow pointer one step
        fast = sumOfSquaresOfDigits(sumOfSquaresOfDigits(fast)); // Move fast pointer two steps
    }
    
    return fast == 1;  // If fast reaches 1, it's a Happy Number
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHappyNumber(num))
        cout << num << " is a Happy Number." << endl;
    else
        cout << num << " is not a Happy Number." << endl;

    return 0;
}

