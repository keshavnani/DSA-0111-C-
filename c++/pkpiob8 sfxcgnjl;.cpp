#include<iostream>
using namespace std;
int main()
{
	int n,t1=0,t2=0,nextterm;
	cout<< "enter the number :";
	cin >> n;
	cout << " fibonacci series :";
	for(int i=1;i<=n;++i)
	{
		cout<< t1 << " ";
		nextterm  = t1+t2;
		t1 = t2;
		t2 = nextterm;
	}
	return 0;
}
