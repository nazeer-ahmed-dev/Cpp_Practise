#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float num1,num2;
	cout<<"Enter the 1st number"<<endl;
	cin>>num1;
	cout<<"Enter the 2nd number"<<endl;
	cin>>num2;
	char op;
	cout<<"Enter the operation '+' for Addition ,'-' for Subraction , '*' for multiplication , '/' for Division and '%' for mod "<<endl;
	cin>>op;
	if(op=='+')
	cout<<"your Addition is : "<<num1+num2<<endl;
		else if(op=='-')
		cout<<"Your Subraction is : "<<num1-num2<<endl;
			else if(op=='*')
			cout<<"your Multiplication is : "<<num1*num2<<endl;
				else if(op=='/')
				cout<<"your Divsion is : "<<num1/num2<<endl;
					else
					cout<<"you mod is : "<<int(num1)%int(num2)<<endl;
}
