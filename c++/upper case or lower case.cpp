#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string str;
    cout<<"enter the string:";
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<"Lowercase:"<<str<<"\n";
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<"Uppercase:"<<str<<"\n";
    return 0;
}
