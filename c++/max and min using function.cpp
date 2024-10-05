#include <iostream>
using namespace std;
int findMinimum(int arr[], int size) {
    int min = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min; 
}
int findMaximum(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max; 
}
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int minElement = findMinimum(arr, size);
    int maxElement = findMaximum(arr, size);
    cout << "Minimum element: " << minElement << endl;
    cout << "Maximum element: " << maxElement << endl;
    return 0;
}

