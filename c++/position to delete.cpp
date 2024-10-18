#include<iostream>
using namespace std;
int main()
{
	int n,pos;
	cout<<"enter the number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"enter the elemets: ";
	for(int i=0;i<n;i++) cin>> arr[i];
	cout<<"enter the position to delete: ";
	cin>>pos;
	if(pos<1 || pos<n)
	{
		cout<<"invalid position!"<<endl;
		return 1;
	}
	for(int i=pos-1;i<n;i++)
	{
		arr[i]=arr[i+1];
		n--;
	}
	cout<<"array after deletion: ";
	for(int i=0;i<n;i++) cout<< arr[i] <<" ";
	cout<<endl;
	return 0;
}
