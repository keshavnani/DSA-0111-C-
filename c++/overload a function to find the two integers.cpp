#include <iostream>
using namespace std;
int max(int a, int b) {
    return (a > b) ? a : b;
}
float max(float a, float b) {
    return (a > b) ? a : b;
}
char max(char a, char b) {
    return (a > b) ? a : b;
}
int main() {
    int int1 = 10, int2 = 20;
    float float1 = 5.5f, float2 = 7.2f;
    char char1 = 'a', char2 = 'z';
    cout << "Maximum of " << int1 << " and " << int2 << " is: " << max(int1, int2) << endl;
    cout << "Maximum of " << float1 << " and " << float2 << " is: " << max(float1, float2) << endl;
    cout << "Maximum of '" << char1 << "' and '" << char2 << "' is: '" << max(char1, char2) << "'" << endl;
    return 0;
}
