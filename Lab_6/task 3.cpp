#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int space(int a)
{int z;
	for(int i=4;i>=0;i--)
	{
		z=pow(10,i);
		cout<<a/z;
		a=a%z;
		cout<<" ";
	}
}
int main()
{
	int a;
	cout<<"Enter 5 digit number "<<endl;
	cin>>a;
	space(a);
}
