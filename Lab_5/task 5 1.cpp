#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
		if(i==3 && j==2)
		cout<<" ";
		else if(i==4 && j==2)
		cout<<" ";
		else if(i==4 && j==3)		
		cout<<" ";
		else 
		cout<<"*";
		
	}
	cout<<endl;
		
	}
}
