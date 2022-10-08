#include<iostream>
using namespace std;
class one
{
	int a1;
	int a2;
	
	public:
	int getnumber()
	{
		cout<<"enter the first number : "<<endl;
		cin>>a1;
		
		cout<<"enter the second number : "<<endl;
		cin>>a2;
	}
	friend int getx(one b);
};

int getx(one b)
{
    int max1= (b.a1>b.a2) ? b.a1 : b.a2;
	cout<<"max number is : "<<max1;
}

int main()
{
	one obj;
	obj.getnumber();
	getx(obj);
	return 0;
}