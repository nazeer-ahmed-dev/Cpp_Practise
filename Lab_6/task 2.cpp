#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
using namespace std;
void company(int year, int weight){
	if(year<=1970){
		if(weight<2700){
		cout<<"the wight class is 1\nthe price of the registration is $16.50"<<endl;}
		else if(weight>=2700 && weight<=3800){
		cout<<"the wight class is 2\nthe price of the registration is $25.50";}
		else if(weight>3800){
		cout<<"the wight class is 3\nthe price of the registration is $46.50";}
	}
	else if(year>=1971&&year<=1979){
		if(weight<2700){
		cout<<"the wight class is 4\nthe price of the registration is $27.00"<<endl;}
		else if(weight>=2700 && weight<=3800){
		cout<<"the wight class is 5\nthe price of the registration is $30.50";}
		else if(weight>3800){
		cout<<"the wight class is 6\nthe price of the registration is $52.50";}
	}
	else if(year>=1980){
		if(weight<3500){
		cout<<"the wight class is 7\nthe price of the registration is $19.50"<<endl;}
		else if(weight>=3500){
		cout<<"the wight class is 8\nthe price of the registration is $52.50";}
		
	}
}

int main()
{int yr,wt;
	cout<<" write year"<<endl;
	cin>>yr;
	cout<<" write weight"<<endl;
	cin>>wt;
	company(yr, wt);
getch();
return 0;
}


