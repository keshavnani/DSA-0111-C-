#include <iostream>
#include <algorithm> 
void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}
int main() {
    int intArr[] = {34, 7, 23, 32, 5};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    double doubleArr[] = {3.4, 1.2, 5.6, 2.1, 4.8};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    sortArray(intArr, intSize);
    std::cout << "Sorted integer array: ";
    for (int i = 0; i < intSize; ++i) {
        std::cout << intArr[i] << " ";
    }
    std::cout << std::endl;
    sortArray(doubleArr, doubleSize);
    std::cout << "Sorted double array: ";
    for (int i = 0; i < doubleSize; ++i) {
        std::cout << doubleArr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

