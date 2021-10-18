#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int array1[2][2]={{2,2},{3,3}},array2[2][2]={{4,4},{4,4}},array3[2][2];
	int *ptr1,*ptr2,*ptr3;
for(int i=0;i<6;i++)
{
	ptr1=*(array1+i);
	ptr2=*(array2+i);
	cout<<ptr1<<"  "<<ptr2;
	cout<<endl;
}
for(int i=0;i<6;i++)
{
	
}
}
