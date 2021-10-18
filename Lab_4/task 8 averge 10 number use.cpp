#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,sum=0,average;
	for(int i=1;i<=10;i++)
	{
		cout<<"Ente the "<<i<<" number"<<endl;
		cin>>num;
		sum=sum+num;
	}
	cout<<"your average is : "<<sum/10<<endl;
}
