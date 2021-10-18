#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,num,sum=0;
	cout<<"Enter the nth term"<<endl;
	cin>>num;
	for(i=1;i<=num;i+=2)
	{
		cout<<i<<" ";
		sum+=i;
	}
	cout<<" = "<<sum<<endl;
}

