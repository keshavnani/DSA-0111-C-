#include<iostream>
using namespace std;
int sum(int a,int b, int c=0,int d=0)
{
	return(a+b+c+d);
}
int main()
{
	int a,b,c,d;
	cout<<"enter the values: ";
	cin>>a>>b>>c>>d;
	int result=sum(a,b,c,d);
	cout<<"sum :" <<result<<endl;
	cout<<"test case a: "<<sum(a,b)<<endl;
	cout<<"test case b:"<<sum(a,b,c)<<endl;
	return 0;
}
