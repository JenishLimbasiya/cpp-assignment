#include<iostream>
using namespace std;
class bank   
{	
      public:
    	string dipositor;
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
		cout<<"user 1 details : \n";
	    cout<<"dipositor name : ";
		cin>>dipositor;
		cout<<"account number : ";
		cin>>acc_num;
		cout<<"account type : ";
		cin>>acconttype;
		
    	cout<<endl<<dipositor<<endl;
    	cout<<acc_num<<endl;
    	cout<<acconttype<<endl;
    	cout<<"balance "<<balance;
		}
};
class user2:public bank
{
    public:
    	void get(int x)
    	{
		balance=x;
		cout<<endl<<endl<<"user 2 details : \n";
	    cout<<"dipositor name : ";
		cin>>dipositor;
		cout<<"account number : ";
		cin>>acc_num;
		cout<<"account type : ";
		cin>>acconttype;
		
    	cout<<endl<<dipositor<<endl;
    	cout<<acc_num<<endl;
    	cout<<acconttype<<endl;
    	cout<<"balance "<<balance;
		}
};
int main()
{
	user1 obj1;
	obj1.get(20000);
	
	user2 obj2;
	obj2.get(25000);
	return 0;
}