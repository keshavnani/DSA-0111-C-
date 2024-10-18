#include<iostream>
using namespace std;
int main()
{
	int n;
	float sum=0, average;
	cout<<"enter number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	average=sum/n;
	cout<<"average of all elements: "<<average<<endl;
	return 0;
}
