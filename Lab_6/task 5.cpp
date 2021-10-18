#include<iostream>
#include<conio.h>
using namespace std;
int taxCalculator(int gs,int ts)
{
	int max,slab1,slab2,slab3,slab4;
	max=gs-ts;
	if(max>0 && max<=100000)
{
		slab1=max*0.0;
	cout<<"AMOUNT"<<slab1<<endl;
}
	else if(max>100000 && max<=200000)
	{
		slab2=(max-10000)*0.1+slab1;
	cout<<"AMOUNT"<<slab2<<endl;
	}
	else if(max>200000 && max<=500000)
{
		slab3=(max-200000)*0.2+slab1+slab2;
	cout<<"AMOUNT"<<slab3<<endl;
}
	else if(max>500000)
	slab4=(max-500000)*0.3+slab1+slab2+slab3;
	cout<<"AMOUNT"<<slab4<<endl;

	
}
int main()
{
	int gs,ts;
	cout<<"ENTER THE GROSS SALARY"<<endl;
	cin>>gs;
	cout<<"ENTER THE  SAVING SALARY"<<endl;
	cin>>ts;
	taxCalculator(gs,ts);
}
