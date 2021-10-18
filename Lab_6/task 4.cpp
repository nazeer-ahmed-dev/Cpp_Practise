#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
void lcm1(int a,int b){
	int c=a*b;
	while(a!=b){
		if(a>b)
		a=a-b;
		}
		cout<<" lcm is of two number is "<<c/a; 
	}
int main()
{	int z,x;
	cout<<" write two number and get the lcm "<<endl;
	cin>>z>>x;
	lcm1(z,x);
getch();
}



