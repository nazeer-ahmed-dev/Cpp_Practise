
#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<string>
#include<iomanip>
using namespace std;
int Regestration(int number,string name,string address,string cnic,string no)
{
	
	fstream ver;
	ver.open("writedata.txt",ios::out | ios::app);
	ver<<name<<endl;
	ver<<address<<endl;
	ver<<cnic<<endl;
	ver<<no<<endl;
	cout<<setw(33)<<"--------------------"<<endl;
	cout<<setw(33)<<"  YOUR INFORMATION :>"<<endl;
	cout<<setw(33)<<"--------------------"<<endl;
	cout<<"                                     "<<endl;
//	cout<<setw(40)<<"Are AGree with you INFORMATION : "<<endl;
	cout<<""<<endl;
	cout<<setw(22)<<"NANE     : >    "<<name<<endl;
	cout<<setw(22)<<"ADDRESS  : >    "<<address<<endl;
	cout<<setw(22)<<"CNIC     : >    "<<cnic<<endl;
	cout<<setw(22)<<"MOBILE NO: >    "<<no<<endl;
	cout<<" "<<endl;
}
int brackfast(int num,int num1,int num2,int num3,int num4)
{
	
	fstream ver;
	ver.open("writedata.txt",ios::out | ios::app);
	ver<<num<<" "<<num*20<<" "<<"Tea"<<endl;
	ver<<num1<<" "<<num1*40<<" "<<"omlet"<<endl;
	ver<<num2<<" "<<num2*30<<" "<<"chola"<<endl;
	ver<<num3<<" "<<num3*30<<" "<<"kabab"<<endl;
	ver<<num4<<" "<<num4*20<<" "<<"paratha"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(33)<<">TOTAL BILL :"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TYPE                                      ITEM     (PRICES)     |   "<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TEA                                       "<<num<<"      "<<num*20<<endl;
	cout<<setw(22)<<"     |OMLET                                     "<<num1<<"     "<<num1*40<<endl;
	cout<<setw(22)<<"     |CHOLA                                     "<<num2<<"     "<<num2*30<<endl;
	cout<<setw(22)<<"     |KABAB                                     "<<num3<<"     "<<num3*30<<endl;
	cout<<setw(22)<<"     |AALO PARATHA                              "<<num4<<"     "<<num4*20<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	int total=0,ftotal=0;
	total=num*20+num1*40+num2*30+num3*30+num4*20;
	if(total>=100)
 	ftotal=num*20+num1*40+num2*30+num3*30+num4*20-10;
	else
	ftotal=num*20+num1*40+num2*30+num3*30+num4*20;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     | 	TOTAL BILL---------------------------"<<"         "<<ftotal<<"|"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<" "<<endl;
	ver<<ftotal<<endl;
	cout<<"ENTER Y FOR GO BACK MENU"<<endl;
}
LUNCH(int n,int n1,int n2 ,int n3,int n4)
{
	fstream ver;
	ver.open("writedata.txt",ios::out | ios::app);
	ver<<n<<" "<<n*60<<" "<<"CHICKEN"<<endl;
	ver<<n1<<" "<<n1*100<<" "<<"CHICKENSANDWITCH"<<endl;
	ver<<n2<<" "<<n2*150<<" "<<"FIHS&CHIPS"<<endl;
	ver<<n3<<" "<<n3*50<<" "<<"FREES"<<endl;
	ver<<n4<<" "<<n4*100<<" "<<"VEGETABEL"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(33)<<">TOTAL BILL :"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TYPE                                      ITEM     (PRICES)     |   "<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |CHICKEN                                       "<<n<<"     "<<n*60<<"  |"<<endl;
	cout<<setw(22)<<"     |CHICKEN SANDWICH                              "<<n1<<"    "<<n1*100<<"|"<<endl;
	cout<<setw(22)<<"     |FISH AND CHIPS                                "<<n2<<"    "<<n2*150<<"|"<<endl;
	cout<<setw(22)<<"     |FRECH FRIES                                   "<<n3<<"    "<<n3*50<<" |"<<endl;
	cout<<setw(22)<<"     |VEGETABLE                                     "<<n4<<"    "<<n4*100<<"|"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	int total1=0,ftotal1=0;
	total1=n*60+n1*100+n2*150+n3*50+n4*100;
	if(total1>=300)
 	ftotal1=n*60+n1*100+n2*150+n3*50+n4*100-50;
	else
	ftotal1=n*60+n1*100+n2*150+n3*50+n4*100;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     | 	TOTAL BILL---------------------------"<<"         "<<ftotal1<<"|"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<" "<<endl;
	ver<<ftotal1;
	cout<<"ENTER Y FOR GO BACK MENU"<<endl;
	
}
int DINNER( int k,int k1,int k2,int k3,int k4)
{
	fstream ver;
	ver.open("writedata.txt",ios::out | ios::app);
	ver<<k<<" "<<k*60<<" "<<"MUTTON"<<endl;
	ver<<k1<<" "<<k1*100<<" "<<"MBIRYANI"<<endl;
	ver<<k2<<" "<<k2*150<<" "<<"ROAST"<<endl;
	ver<<k3<<" "<<k3*50<<" "<<"SABZI"<<endl;
	ver<<k4<<" "<<k4*100<<" "<<"CHART"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(33)<<">TOTAL BILL :"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TYPE                                      ITEM     (PRICES)     |   "<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |MUTTON                                       "<<k<<"     "<<k*150<<"  |"<<endl;
	cout<<setw(22)<<"     |MUTTON BIRYANI                               "<<k1<<"    "<<k1*100<<"|"<<endl;
	cout<<setw(22)<<"     |CHICKEN ROAST                                "<<k2<<"    "<<k2*150<<"|"<<endl;
	cout<<setw(22)<<"     |SABZI                                        "<<k3<<"    "<<k3*90<<" |"<<endl;
	cout<<setw(22)<<"     |MIX CHAR                                     "<<k4<<"    "<<k4*70<<"|"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	int total2=0,ftotal2=0;
	total2=k*150+k1*100+k2*150+k3*90+k4*70;
	if(total2>=300)
 	ftotal2=k*150+k1*100+k2*150+k3*90+k4*70-50;
	else
	ftotal2=k*150+k1*100+k2*150+k3*90+k4*70;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     | 	TOTAL BILL---------------------------"<<"         "<<ftotal2<<"|"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<" "<<endl;
	ver<<ftotal2;
	cout<<"ENTER Y FOR GO BACK MENU"<<endl;
	
	
}

int main()
{
		cout<<"          ----------------------------------------------------------------------------------------"<<endl;
	cout<<"          N   N      A     ZZZZZ EEEE EEEE RRRRR     0000 2222 3333    1   8888    0000 0000 6666 2222"<<endl;
	cout<<"          NN  N     A A        Z E    E    R   R     0  0    2    3   11   8  8    0  0 0  0 6       2 "<<endl;
	cout<<"          N N N    AAAAA      Z  EEEE EEEE RRRRR ==  0  0   2  3333 -- 1   8888 -- 0  0 0  0 6666   2"<<endl;
	cout<<"          N  NN   A     A   Z    E    E    R R       0  0  2      3    1   8  8    0  0 0  0 6  6  2"<<endl;
	cout<<"          N  NN  A       A ZZZZZ EEEE EEEE R   R     0000 2222 3333  11111 8888    0000 0000 6666 2222"<<endl;
	cout<<"          -----------------------------------------------------------------------------------------"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"*                          HH        HH     OOOOOOOOOO    TTTTTTTTTTTTTT  EEEEEEEEEE  LL                              *"<<endl;
	cout<<"*                          HH        HH     OO      OO          TT        EE          LL                              *"<<endl;
	cout<<"*                          HH        HH     OO      OO          TT        EE          LL                              *"<<endl;
	cout<<"*                          HH        HH     OO      OO          TT        EE          LL                              *"<<endl;
	cout<<"*                          HHHHHHHHHHHH     OO      OO          TT        EEEEEEEEEE  LL                              *"<<endl;
	cout<<"*                          HH        HH     OO      OO          TT        EE          LL                              *"<<endl;
	cout<<"*                          HH        HH     OO      OO          TT        EE          LL                              *"<<endl;
	cout<<"*                          HH        HH     OOOOOOOOOO          TT        EEEEEEEEEE  LLLLLLLLLL                      *"<<endl;
	cout<<"***********************************************************************************************************************"<<endl;
	cout<<"*                                                                                                                     *"<<endl;
   	cout<<"*       ----------------------------------------------------------------------------------------------------          *"<<endl;
	cout<<"*       *  MM     MM    AA    NN   N    A    GGGGG  MM     MM EEEE NN   N MM      MM EEEE NN    N TTTTTTTT *          *"<<endl;
    cout<<"*       *  M M   M M   A  A   N N  N   A A   G      M M   M M E    N N  N M M    M M E    N N   N    T     *          *"<<endl;
    cout<<"*       *  M  M M  M  AAAAAA  N  N N  AAAAA  G GGGG M  M M  M EEEE N  N N M  M  M  M EEEE N  N  N    T     *          *"<<endl;
    cout<<"*       *  M   M   M A      A N   NN A     A G   G  M   M   M E    N   NN M   M    M E    N   N N    T     *          *"<<endl;
    cout<<"*       *  M   M   M A      A N   NN A     A GGGGG  M   M   M EEEE N    N M   M    M EEEE N    NN    T     *          *"<<endl;
   	cout<<"*       ----------------------------------------------------------------------------------------------------          *"<<endl;
	cout<<"*                                 --------------------------------------                                              *"<<endl;
	cout<<"*                                 * sss y   y sss ttttt eeee mm     mm *                                              *"<<endl;
	cout<<"*                                 * s    y y  s     t   e    m m   m m *                                              *"<<endl;
	cout<<"*                                 * sss  yy   sss   t   eeee m  m m  m *                                              *"<<endl;
	cout<<"*                                 *   s  y      s   t   e    m   m   m *                                              *"<<endl;
	cout<<"*                                 * sss y     sss   t   eeee m   m   m *                                              *"<<endl;
	cout<<"*                                 --------------------------------------                                              *"<<endl;
    cout<<"***********************************************************************************************************************"<<endl;
		char a,b,c;
		cout<<"ENTER ANY KEY FOR MENU WITH OUT 'N' FOR CONTINUE"<<endl;
		cin>>a;
		system("cls");
				verficationblock:
					system("cls");
			cout<<setw(44)<<"--------------------------"<<endl;
			cout<<setw(44)<<">   CHOOSE ANY OPTION    > :"<<endl;
			cout<<setw(44)<<"--------------------------"<<endl;
			cout<<" "<<endl;
			cout<<setw(33)<<"     |===================================================|   "<<endl;
			cout<<setw(33)<<"     |VERIFICTAION                             (press 1) |   "<<endl;
			cout<<setw(33)<<"     |MENU                                     (press 2) |   "<<endl;
			cout<<setw(33)<<"     |PERSONAL INFORMATION [FOR MANAGER USE]   (press 3) |   "<<endl;
			cout<<setw(33)<<"     |===================================================|   "<<endl;
			cout<<" "<<endl;
			cout<<"PRESS NUMBER (1-3) "<<endl;
			cin>>b;
			switch(b)
		{
				case '1':
			{
				int number;
				string name,address,cnic,no;
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(33)<<">PLEASE VERIFY YOUR SELF :"<<endl;
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(22)	<<"ENTER NUMBER  (1)            :>  ";
				cin>>number;
				cout<<" "<<endl;
				cout<<setw(22)	<<"ENTER THE NAME               :>  ";
				char z;
				cin.get(z);
				getline(cin,name);
				cout<<" "<<endl;
				cout<<setw(22)<<"ENTER THE CITY                 :> ";
				getline(cin,address);
				cout<<" "<<endl;
				cout<<setw(22)<<"ENTER THE CNIC                 :>  ";
				cin>>cnic;
				cout<<" "<<endl; 
				cout<<setw(22)<<"ENTER THE MOBILE NUMBER        :> ";
				cin>>no;
				cout<<""<<endl;
				system("cls");
				Regestration(number,name,address,cnic,no);
				char y;
				cout<<"ENTER Y FOR GO BACK"<<endl;
				cin>>y;
				if(y=='y')
				goto verficationblock;
				system("cls");
			}
				case '2':
			{
				int num=0,num1=0,num2=0,num3=0,num4=0,n=0,n1=0,n2=0,n3=0,n4=0,k=0,k1=0,k2=0,k3=0,k4=0;
				menublock:
					system("cls");
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(33)<<">           MENU         :"<<endl;
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(22)<<"     |===================================================|   "<<endl;
				cout<<setw(22)<<"     |BREAKFAST                                (press 1) |   "<<endl;
				cout<<setw(22)<<"     |LUNCH                                    (press 2) |   "<<endl;
				cout<<setw(22)<<"     |DINNER                                   (press 3) |   "<<endl;
				cout<<setw(22)<<"     |===================================================|   "<<endl;
				cout<<" "<<endl;
				
				char cc;
				cout<<"ENTER Y FOR GO BACK AND N FOR CONTINUE"<<endl;
				cin>>cc;
				if(cc=='y')
				goto verficationblock;
					else
					cout<<"PRESS NUMBER (1-3) "<<endl;
				cin>>c;
					switch(c)
				{		
						case '1':
					{
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(33)<<">BREAKFAST MENU :"<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(22)<<"     |================================================================|   "<<endl;
						cout<<setw(33)<<"     |ITEM                                     (press)     (PRICES)   |   "<<endl;
						cout<<setw(22)<<"     |================================================================|   "<<endl;
						cout<<setw(22)<<"     |TEA                                      (1)         (20)       |   "<<endl;
						cout<<setw(22)<<"     |OMLET                                    (2)         (40)       |   "<<endl;
						cout<<setw(22)<<"     |CHOLA                                    (3)         (30)       |   "<<endl;
						cout<<setw(22)<<"     |KABAB                                    (4)         (30)       |   "<<endl;
						cout<<setw(22)<<"     |AALO PARATHA                             (5)         (20)       |   "<<endl;
						cout<<setw(22)<<"     |================================================================|   "<<endl;
						cout<<" "<<endl;
							char l;
							
							
					//		for(int i=1;i<=5;i++)
					//	{
					bool flag=true;
					char ask;
					while(flag==true)
					{
						askblock:
							
						cout<<"ENTER Y FOR CONTINUE N FOR EXIT"<<endl;
						cin>>ask;
						if(ask=='n')
						{
							flag=false;
						}
						else
							
						cout<<"PRESS NUMBER "<<endl;
							cin>>l;		
								switch(l)
							{		
									case '1':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(33)<<"     | 	HOW MANY ITEM OF TEA :>                                     |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num;
									goto askblock;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}		
		
									case '2':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MANY ITEM OF OMLET  :>                                  |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num1;
									goto askblock;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
								
								}
								
		
									case '3':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MANY ITEM OF CHOLA :>                                   |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num2;
									goto askblock;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}
				
									case '4':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MANY ITEM OF KABAB :>                                   |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num3;
									goto askblock;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}
									case '5':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MANY ITEM OF AALO PARATAH :>                            |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num4;
									goto askblock;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}		
							}
					}
					//	}
							system("cls");
							brackfast(num,num1,num2,num3,num4);
							char bb;
							cin>>bb;
							if(bb=='y')
							goto menublock;
							
					}
	
					case '2':
				{
					cout<<setw(33)<<"--------------------------"<<endl;
					cout<<setw(33)<<">         LUNCH MENU     :"<<endl;
					cout<<setw(33)<<"--------------------------"<<endl;
					cout<<setw(22)<<"     |================================================================|   "<<endl;
					cout<<setw(33)<<"     |ITEM                                     (press)     (PRICES)   |   "<<endl;
					cout<<setw(22)<<"     |================================================================|   "<<endl;
					cout<<setw(22)<<"     |CHICKEN                                  (1)         (60)       |   "<<endl;
					cout<<setw(22)<<"     |CHICKEN SANDWICH                         (2)         (100)      |   "<<endl;
					cout<<setw(22)<<"     |FISH AND CHIPS                           (3)         (150)      |   "<<endl;
					cout<<setw(22)<<"     |FRENCH FRIES                             (4)         (50)       |   "<<endl;
					cout<<setw(22)<<"     |VEGETABLE                                (5)         (100)      |   "<<endl;
					cout<<setw(22)<<"     |================================================================|   "<<endl;
					cout<<" "<<endl;
						char m;
						bool flag=true;
						char ask1;
						while(flag==true)
						{
						askblock2:
						cout<<"ENTER Y FOR EAT SOME THING AND N FOR EXIT"<<endl;
						cin>>ask1;
						if(ask1=='n' || ask1=='N')
						{
							flag=false;
						}
						else
						cout<<"PRESS NUMBER "<<endl;

					//	for(int i=1;i<=5;i++)
				//	{
						
						cin>>m;	
						switch(m)
							{
								case '1':
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(33)<<"     | 	HOW MANY ITEM OF CHICKEN :>                                     |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n;
							goto askblock2;
							cout<<"PRESS NUMBER "<<endl;
							cin>>m;
						}		
							case '2':
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MANY ITEM OF CHICKEN SANDWIC  :>                        |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n1;
							goto askblock2;
							cout<<"PRESS NUMBER "<<endl;
							cin>>m;
						}
							case '3':
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MANY ITEM OF FISH AND CHIPS :>                          |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n2;
							goto askblock2;
							cout<<"PRESS NUMBER "<<endl;
							cin>>m;
						}
							case '4':
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MAY ITEM OF FRENCH FRIES :>                            |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n3;
							goto askblock2;
							cout<<"PRESS NUMBER "<<endl;
							cin>>m;
						}
							case '5':
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MANY ITEM OF VEGETABLE :>                               |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n4;
								goto askblock2;
							cout<<"PRESS NUMBER "<<endl;
							cin>>m;
						}		
							}
				//	}
				}
					system("cls");
					LUNCH(n,n1,n2,n3,n4);
					char bbb;
					cin>>bbb;
					if(bbb=='y')
					goto menublock;
					
				}

						case '3':
					{
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(33)<<">      DINNER MENU        :"<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(22)<<"     |================================================================|   "<<endl;
						cout<<setw(33)<<"     |ITEM                                     (press)     (PRICES)   |   "<<endl;
						cout<<setw(22)<<"     |================================================================|   "<<endl;
						cout<<setw(22)<<"     |MUTTON                                   (1)         (150)      |   "<<endl;
						cout<<setw(22)<<"     |MUTTON BIRYANI                           (2)         (100)      |   "<<endl;
						cout<<setw(22)<<"     |CHICKEN ROAST                            (3)         (150)      |   "<<endl;
						cout<<setw(22)<<"     |SABZI                                    (4)         (90)       |   "<<endl;
						cout<<setw(22)<<"     |MIX CHART                                (5)         (70)       |   "<<endl;
						cout<<setw(22)<<"     |================================================================|   "<<endl;
						cout<<" "<<endl;
						char o;
						bool flag=true;
						char ask2;
						while(flag)
						{
							askblock3:
						cout<<"ENTER Y FOR CONTINUE N FOR EXIT"<<endl;
						cin>>ask2;
						if(ask2=='n')
						{
							flag=false;
						}
						else
						cout<<"PRESS NUMBER "<<endl;
						//	for(int i=1;i<=5;i++)
					//	{
							cin>>o;	
								switch(o)
							{	
									case '1':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(33)<<"     | 	HOW MANY ITEM OF MUTTON :>                                  |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k;
									goto askblock3;
									cout<<"PRESS NUMBER "<<endl;
									cin>>o;
								}
		
									case '2':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MANY ITEM OF MUTTON BIRYANI  :>                         |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k1;
									goto askblock3;
									cout<<"PRESS NUMBER "<<endl;
									cin>>o;
								}
									case '3':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MANY ITEM OF CHICKNE ROAST :>                           |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k2;
									goto askblock3;
									cout<<"PRESS NUMBER "<<endl;
									cin>>o;
								}
			
									case '4':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF SABZI :>                                   |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k3;
									goto askblock3;
									cout<<"PRESS NUMBER "<<endl;
									cin>>o;
								}
									case '5':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MANY ITEM OF MIX CHART :>                               |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k4;
									goto askblock3;
									cout<<"PRESS NUMBER "<<endl;
									cin>>o;
								}			
							}
						
						//}
						system("cls");
						DINNER(k,k1,k2,k3,k4);
						char bbbb;
						cin>>bbbb;
						if(bbbb=='y')
						goto menublock;
					}
				}		
		}	}

		case '3':
				{
					string name2,name3,name4,name5,name6,ftotal,name7,name8,name9,name10,name11,ftotal1,name12,name13,name14,name15,name16,ftotal2;
					int n1,n2,n3,n4,n5,k1,k2,k3,k4,k5,o1,o2,o3,o4,o5,m1,m2,m3,m4,m5,a1,a2,a3,a4,a5,a6,a7,b1,b2,b3,b4,b5;
					string name,address,cnic,no;
					string name1;
					int pw;
					cin.ignore();
					cout<<"ENTER THE NAME    :>";
					getline(cin,name1);
					cout<<" "<<endl;
					cout<<"ENTER YOUR PASWORD :>";
					cin>>pw;
					cout<<endl;
					if(pw==2513)
					{
						
						
					fstream ver;
					ver.open("writedata.txt",ios::in);
					while(!ver.eof()){
					cout<<setw(22)<<"     |================================================================|   "<<endl;
					cout<<setw(22)<<"     | 	ALL INFORAMTION :>                               |   "<<endl;
					cout<<setw(22)<<"     |================================================================|   "<<endl;
					ver>>name;
					ver>>address;
					ver>>cnic;
					ver>>no;
				
					cout<<setw(22)<<"NAME     : >    "<<name<<endl;
					cout<<setw(22)<<"ADDRESS  : >    "<<address<<endl;
					cout<<setw(22)<<"CNIC     : >    "<<cnic<<endl;
					cout<<setw(22)<<"MOBILE NO: >    "<<no<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(33)<<" BREAK FAST :"<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(22)<<"|================================================================|   "<<endl;
						cout<<setw(22)<<"|TYPE                                      ITEM     (PRICES)     |   "<<endl;
						cout<<setw(22)<<"|================================================================|   "<<endl;
						ver>>n1>>k1>>name2;
						ver>>n2>>k2>>name3;
						ver>>n3>>k3>>name4;
						ver>>n4>>k4>>name5;
						ver>>n5>>k5>>name6;	
						ver>>ftotal;
							cout<<"|"<<name2<<"                                  "<<n1<<"     "<<k1<<endl;
							cout<<"|"<<name3<<"                                   "<<n2<<"     "<<k2<<endl;
							cout<<"|"<<name4<<"                                   "<<n3<<"     "<<k3<<endl;
							cout<<"|"<<name5<<"                                   "<<n4<<"     "<<k4<<endl;
							cout<<"|"<<name6<<"                                   "<<n5<<"     "<<k5<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<"| 	TOTAL BILL---------------------------"<<"         "<<ftotal1<<"|"<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<" "<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(33)<<" LUNCH FAST :"<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<"|================================================================|   "<<endl;
						cout<<"|TYPE                                      ITEM     (PRICES)     |   "<<endl;
						cout<<"|================================================================|   "<<endl;	
						ver>>o1>>m1>>name7;
						ver>>o2>>m2>>name8;
						ver>>o3>>m3>>name9;
						ver>>o4>>m4>>name10;
						ver>>o5>>m5>>name11;
						ver>>ftotal1;
							cout<<"|"<<name7<<"                                     "<<o1<<"     "<<m1<<endl;
							cout<<"|"<<name8<<"                                     "<<o2<<"     "<<m2<<endl;
							cout<<"|"<<name9<<"                                     "<<o3<<"     "<<m3<<endl;
							cout<<"|"<<name10<<"                                    "<<o4<<"     "<<m4<<endl;
							cout<<"|"<<name11<<"                                    "<<o5<<"     "<<m5<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<"| 	TOTAL BILL---------------------------"<<"         "<<ftotal1<<"|"<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<" "<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(33)<<" DINNER FAST :"<<endl;
						cout<<setw(33)<<"--------------------------"<<endl;
						cout<<setw(22)<<"|================================================================|   "<<endl;
						cout<<setw(22)<<"|TYPE                                      ITEM     (PRICES)     |   "<<endl;
						cout<<setw(22)<<"|================================================================|   "<<endl;
						ver>>a1>>b1>>name12;
						ver>>a2>>b2>>name13;
						ver>>a3>>b3>>name14;
						ver>>a4>>b4>>name15;
						ver>>a5>>b5>>name16;	
						ver>>ftotal2;
							cout<<"|"<<name12<<"                                     "<<a1<<"     "<<b1<<endl;
							cout<<"|"<<name13<<"                                     "<<a2<<"     "<<b2<<endl;
							cout<<"|"<<name14<<"                                     "<<a3<<"     "<<b3<<endl;
							cout<<"|"<<name15<<"                                    "<<a4<<"     "<<b4<<endl;
							cout<<"|"<<name16<<"                                    "<<a5<<"     "<<b5<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<"| 	TOTAL BILL---------------------------"<<"         "<<ftotal2<<"|"<<endl;
							cout<<"|================================================================|   "<<endl;
							cout<<" "<<endl;
		}
	
	}
					else
					{
						cout<<setw(22)<<"YOU HAVEN'T AUTHORITY TO SEE PERSONAL INFORAMTION "<<endl;
						
					}
				}	
	}
}
