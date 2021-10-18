#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char alpha,ch;
	bool nazeer=true;
	while(nazeer)
	{
		cout<<"Enter the charcter"<<endl;
		cin>>alpha;
		cout<<"YOu ASCII value : "<<int(alpha)<<endl;
		 cout<<"Enter the y for continue and N for break"<<endl;
		cin>>ch;
		if(ch=='N' || ch=='n')
		nazeer=false;
	}
}
