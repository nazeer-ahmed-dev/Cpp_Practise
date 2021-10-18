#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
int area(float k ,float r)
{
		float area;
	area=1.0/2*k*r;
	cout<<area;
	
}
int main()
{
fstream file;
float k,r;
file.open("area.txt",ios::in);
file>>k>>r;
area(k,r);
return 0;
}
