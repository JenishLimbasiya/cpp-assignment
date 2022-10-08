#include<iostream>
using namespace std;
class a
{
	public:
	int number1,number2;
    void getnumber()
    {
	cout<<"enter first number : ";
	cin>>number1;
	
	cout<<"enter second number : ";
	cin>>number2;
	
	char op;
	cout<<"enter the charcter oprater : ";
	cin>>op;
	
	switch(op)
	{
		case '+':
		cout<<"sum : "<<number1+number2;
		break;
		
		case '-':
		cout<<"subtraction : "<<number1-number2;
		break;
		
		case '*':
		cout<<"multiplication : "<<number1*number2;
		break;
		
		case '/':
		cout<<"division : "<<number1/number2;
		break;
		
		case '%':
		cout<<"reminder : "<<number1%number2;
		break;
		
		default:
		cout<<"enetr correct choice...!";	
    }
	}
};
int main()
{
	a obj;
	obj.getnumber();
}
