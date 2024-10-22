#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number: ";
	cin>>num;
	if(num % 7 == 0 || num % 10 == 7)
	{
		cout<<"it is buzz number. "<<endl;
	}
	else {
		cout<<"it is not buzz number. "<<endl;
	}
	return 0;
}
