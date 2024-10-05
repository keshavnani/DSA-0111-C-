#include <iostream>
#include <cstring> 
using namespace std;
void concatenate(char* result, const char* str1, const char* str2) {
    strcpy(result, str1); 
    strcat(result, str2); 
}
string concatenate(const string& str1, const string& str2) {
    return str1 + str2; 
}
int main() {
    char arr1[100] = "Hello, ";
    char arr2[] = "world!";
    char result[100]; 
    concatenate(result, arr1, arr2);
    cout << "Concatenated character arrays: " << result << endl;
    string str1 = "Hello, ";
    string str2 = "world!";
    string concatenatedStr = concatenate(str1, str2);
    cout << "Concatenated C++ strings: " << concatenatedStr << endl;

    return 0;
}

