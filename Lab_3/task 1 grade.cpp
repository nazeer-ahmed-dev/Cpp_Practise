#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float percentage;
	cout<<"Enter the percentage "<<endl;
	cin>>percentage;
	if(percentage>80)
	cout<<"A GRADE"<<endl;
		else if(percentage>70)
		cout<<"B GRADE"<<endl;
			else if(percentage>60)
			cout<<"C GRADE"<<endl;
				else if(percentage>50)
				cout<<"D GRADE"<<endl;
					else
					cout<<"Fail"<<endl;
					getch();
	
}
