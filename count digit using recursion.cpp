#include<iostream>
using namespace std;

int getdigit(int number)
{
   static int count=0;
	if(number!=0)
	{
	  count++;
	  number=number/10;
	  getdigit(number);
	}
	return count;
}
int main()
{
	int number;
	cout<<"enter the digit : ";
	cin>>number;
	
	cout<<getdigit(number);
	return 0;
}