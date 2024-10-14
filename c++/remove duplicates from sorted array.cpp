#include <iostream>
using namespace std;
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;
    int temp[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    return j;  
}
int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the sorted array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int newSize = removeDuplicates(arr, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

