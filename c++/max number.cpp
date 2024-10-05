#include<iostream>
using namespace std ;
int main ()
{
	int a,b,c;
	cout << "enter the integers : ";
	cin >> a >> b >> c ;
	int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
	cout << "the maximum number is :" << max << endl;
	return 0; 
}
