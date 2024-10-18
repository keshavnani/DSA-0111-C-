#include<iostream>
using namespace std;
void reversearray(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main()
{
	int size;
	cout<<"enter the size of the number: ";
	cin>>size;
	int arr[size];
	cout<<"enter the numbers: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	reversearray(arr,size);
	cout<<"reversed array: ";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
