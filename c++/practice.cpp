#include<iostream>
using namespace std;
int factorial(int n) {
	int fact=1;
	for (int i=1;i<=n;i++)
	{
		fact *=i;
	}
	return fact;
}
int main()
{
	int num;
	cout << "enter a positive interger : ";
	cin >> num;
	if (num < 0)
	{
		cout << " facorial is not defined for negetive integers :" << endl;
	}
	else {
		cout << "factorial of " << num << " = " << factorial(num) << endl;
	}
	return 0;
}
