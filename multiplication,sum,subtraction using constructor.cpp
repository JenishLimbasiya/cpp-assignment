#include<iostream>
using namespace std;
class a
{
	int num1,num2,mul;
	public:
		a()
		{
			cout<<"multiplication\n\n";
			cout<<"enter first number : ";
			cin>>num1;
			cout<<"enter second number : ";
			cin>>num2;
			mul=num1*num2;
			cout<<"multiplication is : "<<mul;
		}
};
class b
{
	int num1,num2,sum;
	public:
		b()
		{
			cout<<"\n\naddition";
			cout<<endl<<endl<<"enter first number : ";
			cin>>num1;
			cout<<"enter second number : ";
			cin>>num2;
			sum=num1+num2;
			cout<<"sum is : "<<sum;
		}
};
class c
{
	int num1,num2,subtraction;
	public:
		c()
		{
			cout<<"\n\nsubtraction";
			cout<<endl<<endl<<"enter first number : ";
			cin>>num1;
			cout<<"enter second number : ";
			cin>>num2;
			subtraction=num1-num2;
			cout<<"subtraction is : "<<subtraction;
		}
};
int main()
{
	a obj;
	b obj1;
	c obj2;
	return 0;
}