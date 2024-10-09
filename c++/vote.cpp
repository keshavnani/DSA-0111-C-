#include<iostream>
using namespace std;
int main() {
	int age;
	cout<<"enter the age of the person: ";
	cin>>age;
	if (age>18) {
		cout<<age<<"he is elgible to vote"<<endl;
	}
	else {
		cout<<"he is not elgible to vote"<<endl;
	}
	return 0;
}
