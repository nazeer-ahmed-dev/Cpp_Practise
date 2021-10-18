#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float num1,num2,num3;
	cout<<"Enter the 1st number "<<endl;
	cin>>num1;
	cout<<"Enter the 2nd number "<<endl;
	cin>>num2;
	cout<<"Enter the 3rd number "<<endl;
	cin>>num3;
	if(num1>num2 && num1>num3)
	cout<<"Greater number is : "<<num1;
	else if(num2>num1 && num2>num3)
	cout<<"Greater number is : "<<num2;
	else if(num3>num1 && num3>num2)
	cout<<"Greater number is : "<<num3<<endl;
	else
	cout<<"Egual to each other "<<endl;
	
	getch();
}
