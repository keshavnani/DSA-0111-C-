#include<iostream>
using namespace std;
int main()
{
	int number;
	cout << "enter the number: ";
	cin >> number;
	if (number > 0)
	{
		cout << "it is positive." << endl;
	}
	else if ( number < 0)
	{
		cout << "it is negetive." << endl;
	}
	else {
		cout << "it is zero." << endl;
	}
	return 0;
} 
