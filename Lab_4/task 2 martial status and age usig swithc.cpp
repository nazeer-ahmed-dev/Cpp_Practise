#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age "<<endl;
	cin>>age;
	char gender,ms;
	cout<<"Enter the Gender "<<endl;
	cin>>gender;
	switch(gender)
	{
	case 'f':
	case 'F':
	cout<<"Work onlu in urban area"<<endl;
	break;
	case 'm':
	case 'M':
	{
		if(age>40 && age<60)
		cout<<"work in urban area"<<endl;
		cout<<"Enter the martical status y for yes N for NO"<<endl;
		cin>>ms;
		if(ms=='n' || ms=='N')
		{
		if(age>=20 && age<40)
		cout<<"may work only uran area"<<endl;}
		else if(ms=='y'|| ms=='Y')
		{
		 if(age>=20 && age<=40)
		cout<<"may work anywhere"<<endl;}
		else
		cout<<"ERROR"<<endl;
		break;
	}
	}
}
