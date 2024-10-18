#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n, largest= INT_MIN,secondLargest= INT_MIN;
	cout<<"enter the number of elements: ";
	cin>>n;
	int arr[n];
	cout<<"enter the elements: ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>largest)
		{
			secondLargest=largest;
			largest=arr[i];
		}
		else if(arr[i]>secondLargest && arr[i] != largest)
		{
			secondLargest=arr[i];
		}
	}
	if(secondLargest == INT_MIN)
	   cout<<"no second largest element."<<endl;
	else 
	    cout<<"second largest: "<<secondLargest<<endl;
	    return 0;
}
