#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,cube;
	cout<<"Enter the number "<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		cube=i*i*i;
		cout<<i<<"*"<<i<<"*"<<i<<"="<<cube<<endl;
		
		}	
}
