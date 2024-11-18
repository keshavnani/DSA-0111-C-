#include<iostream>
using namespace std;
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	int pos = 3;
	int element  = 89;
	for(int i=n;i>pos;i--) {
		arr[i]=arr[i-1];
	}
	arr[pos]= element;
	n++;
	for(int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
 
