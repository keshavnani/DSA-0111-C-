#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter the number of rows: ";
	cin>>rows;
	for(int i=0;i<rows;i++)
	{
		for(int space=0;space<rows-1;space++)
		{
			cout<" ";
		}
		int value=1;
		for (int j=1;j<=i;j++)
		{
			cout<<value<<" ";
			value=value*(i-1)/(j+1);
		}
		cout<<endl;
	}
	return 0;
}
