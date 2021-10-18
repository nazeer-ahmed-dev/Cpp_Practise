#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int acceleration(int vf, int vi, int s)
{  int acceleration=(vf*vf-vi*vi)/(2*s);
    return acceleration;
}
int Distance(int vf, int vi, int a)
{
int Distance=(vf*vf-vi*vi)/(2*a);
    return Distance;
}
int final_vilocity(int vi, int s, int a)
{
  int final_velocity=sqrt(vi*vi+2*a*s);
    return final_velocity;
}
int initial_vilocity(int vf, int s, int a)
{
   int initial_velocity=sqrt(vf*vf+2*a*s);
    return initial_velocity;
}

int main()
{    int x;
    double vf1, vi1, s1, a1;
    cout<<"write 1 to get accelarion\n2 to get distance\n3 to get final velocity\n4 to get initial velocity"<<endl;
    cin>>x;
    switch(x)
    {
        case 1:
            cout<<"write final velocity"<<endl;
            cin>>vf1;
            cout<<" write initial velocity"<<endl;
            cin>>vi1;
            cout<<" write distance"<<endl;
            cin>>s1;
            cout<<acceleration(vf1, vi1, s1);
            break;
        case 2:
            cout<<"write final velocity"<<endl;
            cin>>vf1;
            cout<<" write initial velocity"<<endl;
            cin>>vi1;
            cout<<" acceleration"<<endl;
            cin>>a1;
            cout<<Distance(vf1, vi1, a1);
            break;
		case 3:
            cout<<"distance"<<endl;
            cin>>s1;
            cout<<" write initial velocity"<<endl;
            cin>>vi1;
            cout<<" acceleration"<<endl;
            cin>>a1;
            cout<<final_vilocity(vi1, s1, a1);
            break;
		case 4:
            cout<<"distance"<<endl;
            cin>>s1;
            cout<<" write final velocity"<<endl;
            cin>>vf1;
            cout<<" acceleration"<<endl;
            cin>>a1;
            cout<<initial_vilocity(vf1, s1, a1);
            break;	            
            
            default:
                cout<<" wrong input ";
    }
    getch();
}

