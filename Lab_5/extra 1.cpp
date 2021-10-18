#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a;
	cout<<"enter the number"<<endl;
	cin>>a;
	for (int i=1;i<=4;i++)
	{
		for(int j=2;j<=i;j++)
		{
			cout<<" ";
		}
		for(int k=4;k>=i;k--)
		cout<<"*";
		cout<<endl;
	}
}
