#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<string>
#include<iomanip>
using namespace std;
int Regestration(string name,string address,string cnic,string no)
{
	fstream ver;
	ver.open("writedata.txt",ios::out | ios::app);
	ver<<setw(33)<<"--------------------"<<endl;
	ver<<setw(33)<<"  Your Information :>"<<endl;
	ver<<setw(33)<<"--------------------"<<endl;
	ver<<"                                     "<<endl;
	ver<<setw(40)<<"Are AGree with you INFORMATION : "<<endl;
	ver<<""<<endl;
	ver<<setw(22)<<"Name     : >    "<<name<<endl;
	ver<<setw(22)<<"Address  : >    "<<address<<endl;
	ver<<setw(22)<<"CNIC     : >    "<<cnic<<endl;
	ver<<setw(22)<<"Mobile NO: >    "<<no<<endl;
	ver<<" "<<endl;
	cout<<setw(40)<<"ENTER Y FOR CONTINUE N FOR EDITING AGAIN : "<<endl;
	cout<<setw(33)<<"--------------------"<<endl;
	cout<<setw(33)<<"  Your Information :>"<<endl;
	cout<<setw(33)<<"--------------------"<<endl;
	cout<<"                                     "<<endl;
	cout<<setw(40)<<"Are AGree with you INFORMATION : "<<endl;
	cout<<""<<endl;
	cout<<setw(22)<<"Name     : >    "<<name<<endl;
	cout<<setw(22)<<"Address  : >    "<<address<<endl;
	cout<<setw(22)<<"CNIC     : >    "<<cnic<<endl;
	cout<<setw(22)<<"Mobile NO: >    "<<no<<endl;
	cout<<" "<<endl;
}
int brackfast(int num,int num1,int num2,int num3,int num4)
{
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(33)<<">TOTAL BILL :"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TYPE                                      ITEM     (PRICES)     |   "<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TEA                                       "<<num<<"     "<<num*20<<"|"<<endl;
	cout<<setw(22)<<"     |OMLET                                     "<<num1<<"    "<<num1*40<<"|"<<endl;
	cout<<setw(22)<<"     |CHOLA                                     "<<num2<<"    "<<num2*30<<"|"<<endl;
	cout<<setw(22)<<"     |KABAB                                     "<<num2<<"    "<<num3*30<<"|"<<endl;
	cout<<setw(22)<<"     |AALO PARATHA                              "<<num2<<"    "<<num4*20<<"|"<<endl;
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
	
}
LUNCH(int n,int n1,int n2 ,int n3,int n4)
{
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(33)<<">TOTAL BILL :"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TYPE                                      ITEM     (PRICES)     |   "<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |CHICKEN                                       "<<n<<"     "<<n*60<<"  |"<<endl;
	cout<<setw(22)<<"     |CHICKEN SANDWICH                              "<<n1<<"    "<<n1*100<<"|"<<endl;
	cout<<setw(22)<<"     |FISH AND CHIPS                                "<<n2<<"    "<<n2*150<<"|"<<endl;
	cout<<setw(22)<<"     |FRECH FRIES                                   "<<n2<<"    "<<n3*50<<" |"<<endl;
	cout<<setw(22)<<"     |VEGETABLE                                     "<<n2<<"    "<<n4*100<<"|"<<endl;
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
	
}
int DINNER( int k,int k1,int k2,int k3,int k4)
{
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(33)<<">TOTAL BILL :"<<endl;
	cout<<setw(33)<<"--------------------------"<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |TYPE                                      ITEM     (PRICES)     |   "<<endl;
	cout<<setw(22)<<"     |================================================================|   "<<endl;
	cout<<setw(22)<<"     |MUTTON                                       "<<k<<"     "<<k*150<<"  |"<<endl;
	cout<<setw(22)<<"     |MUTTON BIRYANI                               "<<k1<<"    "<<k1*100<<"|"<<endl;
	cout<<setw(22)<<"     |CHICKEN ROAST                                "<<k2<<"    "<<k2*150<<"|"<<endl;
	cout<<setw(22)<<"     |SABZI                                        "<<k2<<"    "<<k3*90<<" |"<<endl;
	cout<<setw(22)<<"     |MIX CHAR                                     "<<k2<<"    "<<k4*70<<"|"<<endl;
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
				string name,address,cnic,no;
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(33)<<">Please verify your self :"<<endl;
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(22)
				<<"Enter the name               :>  ";
				char z;
				cin.get(z);
				getline(cin,name);
				cout<<" "<<endl;
				cout<<setw(22)<<"Enter the permanent Address  :> ";
				getline(cin,address);
				cout<<" "<<endl;
				cout<<setw(22)<<"Enter the CNIC               :>  ";
				cin>>cnic;
				cout<<" "<<endl;
				cout<<setw(22)<<"Enter the Mobile Number      :> ";
				cin>>no;
				cout<<""<<endl;
				system("cls");
				Regestration(name,address,cnic,no);
			}
				case '2':
			{
				int num=0,num1=0,num2=0,num3=0,num4=0,n=0,n1=0,n2=0,n3=0,n4=0,k=0,k1=0,k2=0,k3=0,k4=0;
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(33)<<">           MENU         :"<<endl;
				cout<<setw(33)<<"--------------------------"<<endl;
				cout<<setw(22)<<"     |===================================================|   "<<endl;
				cout<<setw(22)<<"     |BREAKFAST                                (press 1) |   "<<endl;
				cout<<setw(22)<<"     |LUNCH                                    (press 2) |   "<<endl;
				cout<<setw(22)<<"     |DINNER                                   (press 3) |   "<<endl;
				cout<<setw(22)<<"     |===================================================|   "<<endl;
				cout<<" "<<endl;
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
							cout<<"PRESS NUMBER "<<endl;
							for(int i=1;i<=5;i++)
						{	char a;	
							cin>>l;		
								switch(l)
							{		
									case '1':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(33)<<"     | 	HOW MAY ITEM OF TEA :>                                     |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num;
									cout<<"Enter n for exit"<<endl;
									cin>>a;
									if(a=='n')
									break;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
									
								}		break;
		
									case '2':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF OMLET  :>                                  |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num1;
									cout<<"Enter n for exit"<<endl;
									cin>>a;
									if(a=='n')
									break;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}
		
									case '3':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF CHOLA :>                                   |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num2;
										cout<<"Enter n for exit"<<endl;
									cin>>a;
									if(a=='n')
									break;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}
				
									case '4':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF KABAB :>                                   |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num3;
										cout<<"Enter n for exit"<<endl;
									cin>>a;
									if(a=='n')
									break;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}
									case '5':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF AALO PARATAH :>                            |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>num4;
										cout<<"Enter n for exit"<<endl;
									cin>>a;
									if(a=='n')
									break;
									cout<<"PRESS NUMBER "<<endl;
									cin>>l;
									
								}
								}
				
							
						}
							system("cls");
							brackfast(num,num1,num2,num3,num4);
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
						cout<<"PRESS NUMBER "<<endl;

						for(int i=1;i<=5;i++)
					{
						cin>>m;	
							if(m=='1')
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(33)<<"     | 	HOW MAY ITEM OF CHICKEN :>                                     |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>num;
							cout<<"PRESS NUMBER "<<endl;
						}		
							else if(m=='2')
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MAY ITEM OF CHICKEN SANDWIC  :>                        |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n1;
							cout<<"PRESS NUMBER "<<endl;
						}
							else if(m=='3')
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MAY ITEM OF FISH AND CHIPS :>                          |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n2;
							cout<<"PRESS NUMBER "<<endl;
						}
							else if(m=='4')
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MAY ITEM OF FRENCH FRIES :>                            |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n3;
							cout<<"PRESS NUMBER "<<endl;
						}
							else if(m=='5')
						{
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cout<<setw(22)<<"     | 	HOW MAY ITEM OF VEGETABLE :>                               |   "<<endl;
							cout<<setw(22)<<"     |================================================================|   "<<endl;
							cin>>n4;
							cout<<"PRESS NUMBER "<<endl;
						}		
					}
					system("cls");
					LUNCH(n,n1,n2,n3,4);
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
						cout<<"PRESS NUMBER "<<endl;
							for(int i=1;i<=5;i++)
						{
							cin>>o;	
								switch(o)
							{	
									case '1':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(33)<<"     | 	HOW MAY ITEM OF MUTTON :>                                  |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k;
									cout<<"PRESS NUMBER "<<endl;
								}
		
									case '2':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF MUTTON BIRYANI  :>                         |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k1;
									cout<<"PRESS NUMBER "<<endl;
								}
									case '3':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF CHICKNE ROAST :>                           |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k2;
									cout<<"PRESS NUMBER "<<endl;
								}
			
									case '4':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF SABZI :>                                   |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k3;
									cout<<"PRESS NUMBER "<<endl;
								}
									case '5':
								{
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cout<<setw(22)<<"     | 	HOW MAY ITEM OF MIX CHART :>                               |   "<<endl;
									cout<<setw(22)<<"     |================================================================|   "<<endl;
									cin>>k4;
									cout<<"PRESS NUMBER "<<endl;
								}			
							}
						
						}
						system("cls");
						DINNER(k,k1,k2,k3,k4);
					}
				}		
			}
	}
}
