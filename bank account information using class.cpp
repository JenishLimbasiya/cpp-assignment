#include<iostream>
using namespace std;
class bank   
{	
      public:
    	string dipositorname;
		int acc_num;
		string acconttype;
	protected:
		int balance;	
};
class user1:public bank
{
    public:
    	void get(int x)
    	{
		balance=x;
		
	    cout<<"dipositor name : ";
		cin>>dipositorname;
		cout<<"account number : ";
		cin>>acc_num;
		cout<<"account type : ";
		cin>>acconttype;
		
    	cout<<endl<<dipositorname<<endl;
    	cout<<acc_num<<endl;
    	cout<<acconttype<<endl;
    	cout<<"balance "<<balance;
		}
		
		void depositor()
		{
			int deposited_amount;
			cout<<"\n\nhow many money deposited : ";
			cin>>deposited_amount;
			balance=balance+deposited_amount;
			cout<<"after deposited account balance : "<<balance<<endl<<endl;
		}
		void withdrow()
		{
			int withdrow_amount;
			cout<<"how many maoney is withdrow : ";
			cin>>withdrow_amount;
			cout<<"after withdrow account balance : "<<balance-withdrow_amount;
		}
};

int main()
{
	user1 obj1;
	obj1.get(20000);
	obj1.depositor();
	obj1.withdrow();
	return 0;
}