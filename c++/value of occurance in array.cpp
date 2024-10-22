#include <iostream>
using namespace std;
int countoccurrences(int arr[], int size, int value) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            count++;
        }
    }
    return count;
}
int main() {
    int size, value;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the value to find occurrences of: ";
    cin >> value;
    int occurrences = countoccurrences(arr, size, value);
    cout << "The value " << value << " occurs " << occurrences << " times in the array." << endl;
    return 0;
}

