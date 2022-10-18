#include<iostream>
using namespace std;

class kevil
{
	public:
	string ch;
	kevil()
	{
	 do
	{
	int choice;
    int num1,num2,sum,mul;
    cout<<"enter 1 no for sum : "<<endl;
    cout<<"enter 2 no for mul : "<<endl;
    cout<<"enter your choice : ";
    cin>>choice;
   
   switch(choice)
   {
   	case 1:cout<<"enter number1 : ";
   	       cin>>num1;
   	       cout<<"enter number2 : ";
   	       cin>>num2;
   	       sum=num1+num2;
   	       cout<<"sum is : "<<sum;
	break;
	
	case 2:cout<<"enter number1 : ";
   	       cin>>num1;
   	       cout<<"enter number2 : ";
   	       cin>>num2;
   	       mul=num1*num2;
   	       cout<<"multiplication is : "<<mul;
	break;

	default:
	printf("enter the correct choice.....");
   }
   cout<<"\n\ndo you want to continue yes or no : ";
   	cin>>ch;
}
   while(ch=="yes");
}

};

int main()
{
	kevil obj;
   return 0;
}
   