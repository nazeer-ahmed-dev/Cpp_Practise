#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int read(string name)
{	
	fstream file;
file.open("read1.txt",ios :: out);
file<<name;

	
}
int write(string name1)
{
fstream file1;
file1.open("read.txt",ios:: in);
getline(file1,name1);	
cout<<name1;
}

int main()
{
	string name;
	string name1;
	getline(cin,name);
	read(name);
	write(name1);
	
	
}
