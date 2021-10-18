#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float amount,bill;
	cout<<"Enter the pakistani rupees "<<endl;
	cin>>amount;
	char op;
	cout<<"Enter 1 for conversing to Dollar"<<endl;
	cout<<"Enter 2 for conversing to Pound"<<endl;
	cout<<"Enter 3 for conversing to Euro"<<endl;
	cout<<"Enter 4 for conversing to Korean won"<<endl;
	cout<<"Enter 5 for conversing to Japanese yen"<<endl;
	cout<<"Enter 6 for conversing to chinese yuan"<<endl;
	cin>>op;
	switch(op)
	{
		case '1':
			bill=amount*0.0095;
			cout<<"convert amount in dollar is "<<bill<<endl;
			break;
				case '2':
				bill=amount*0.0074;
				cout<<"convert amount in Pound is : "<<bill<<endl;
				break;
					case '3':
					bill=amount*0.008;
					cout<<"convert amount in Euro  is : "<<bill<<endl;
					break;
						case '4':
						bill=amount*10.8;
						cout<<"convert amount in Korean won is : "<<bill<<endl;
						break;
							case '5':
							bill=amount*1.04;
							cout<<"convert amount in Japanese yen is : "<<bill<<endl;
							break;
								case '6':
								bill=amount*0.064;
								cout<<"convert amount in chinese yuan is : "<<bill<<endl;
								break;		
			getch();
	}
}
