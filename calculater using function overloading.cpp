#include<iostream>
using namespace std;
class calculater
{
	public:
	void a(int num1,int num2)
	{
		cout<<"sum is : "<<num1+num2<<endl;
	}
	void a(double num1,int num2)
	{
		cout<<"subtraction is : "<<num1-num2<<endl;
	}
	void a(int num1,double num2)
	{
		cout<<"multiplication is : "<<num1*num2<<endl;
	}
	void a(double num1,double num2)
	{
		cout<<"division is : "<<num1/num2<<endl;
	}
	
};
int main()
{
	calculater obj;
	obj.a(2,5);
	obj.a(4.0,2);
	obj.a(4,5.0);
	obj.a(10.0,2.0);
	
	return 0;	
}