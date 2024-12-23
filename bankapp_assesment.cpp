#include<iostream>
#include<ctime>
using namespace std;


class bankdetail
{
	protected:
		int dt,user_pin,i,depo,withd,t_balance,balance,accno;
		string sname,city,state;
	public:
		bankdetail(int pin=12345)
		{
			time_t now = time(0);
       		char* dt = ctime(&now);
       		cout <<"Current Date and Time:"<<dt;
       		       		
       		for(i=0;i<5;i++)
        	{
        		user_pin=pin;

        		cout<<"\nenter the user pin:";
        		cin>>user_pin;
       
      		  	if(user_pin==pin)
      	  		{
        			cout<<"\npin is valid";
        			cout<<"\nallow teansction in account";
        			break;
        			
				}
				else
				{
					cout<<"\npin is not valid";
				}
			}
				if(i==5)
				{
					cout<<"\nnot transction in account";
					exit(0);
				}
			
		}
		void par_detail(string,string,string);
		void deposite();
		void withdrow();
		void balancecheak();
		
};

void bankdetail::par_detail(string name,string addcity,string addstate)
{
		
			sname=name;
       		city=addcity;
       		state=addstate;
       		cout<<"\nenter the account no:";
       		cin>>accno;
       		cout<<"\nname:"<<sname;
       		cout<<"\ncity:"<<city;
			cout<<"\nstate:"<<state;
			cout<<"\naccount no:"<<accno;
}

void bankdetail::deposite()
{
	cout<<"\nenter the balance:";
	cin>>balance;
	cout<<"\nenter the deposite:";
	cin>>depo;
	cout<<"\nbalance:"<<balance;
	t_balance=balance+depo;
	cout<<"\ntotal balance:"<<t_balance;
}

void bankdetail::withdrow()
{
	cout<<"enter the balance";
	cin>>balance;
	cout<<"\nenter the withdrow:";
	cin>>withd;
	
	if(2000>=balance)
	{
		cout<<"\nnot withdrow not allow balance:"<<balance;
	}
	else
	{
		cout<<"\nbalance:"<<balance;
		t_balance=balance-withd;
		cout<<"\nwithdrow:"<<t_balance;
	}
}
void bankdetail::balancecheak()
{
	cout<<"\nenter the balance:";
	cin>>balance;
	cout<<"\nbalance:"<<balance;
}


main()
{
	char ch;
	do
	{
	bankdetail ob;
	string n1,n2,n3;
	cout<<"\nenter the name:";
	cin>>n1;
	cout<<"\nenter the city:";
	cin>>n2;
	cout<<"\nenter the state:";
	cin>>n3;
	
	ob.par_detail(n1,n2,n3);
	
	cout<<"\n---------------------------\n";
	cout<<"\n0.press exit";
	cout<<"\n1.press deposite";
	cout<<"\n2.press withdrow";
	cout<<"\n3.press cheak blance";
	cout<<"\n---------------------------\n";
	
	int choice;
	cout<<"\nenter the choice:";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			ob.deposite();
			break;
			
		case 2:
			ob.withdrow();
			break;
			
		case 3:
			ob.balancecheak();
			break;
			
		case 0:
			exit(0);
			break;
			
		default:
			cout<<"invalid choice";
	}
	
	
	cout<<"\n can you repeat your proccess (Y or y)";
	cin>>ch;
	}while(ch=='Y'||ch=='y');
	
}

