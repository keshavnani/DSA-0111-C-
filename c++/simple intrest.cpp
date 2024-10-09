#include<iostream>
using namespace std;
int main()
{
	int principle,time,rate,intrest;
	cout<<"enter principle amount :";
	cin>>principle;
	cout<<"enter rate of intrest:";
	cin>>rate;
	cout<<"enter time period: ";
	cin>>time;
	intrest=(principle*rate*time)/100;
	cout<<"simple intrest = "<<intrest<<endl;
	return 0;
}
