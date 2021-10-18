#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	ifstream file;
	file.open("2d.txt");
	int array[2][2];
	if(file.is_open())
	{
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
	{
		file>>array[i][j];
		}
		}
		
		for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
	{
		cout<<array[i][j]<<" ";
		}
		cout<<endl;
		}
	}
	else
	cout<<"file does not exist"<<endl;
	
	getch();
}
	
