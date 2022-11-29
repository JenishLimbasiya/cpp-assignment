#include<iostream>
using namespace std;
int main()
{
	int product=1,sum=0,n,answer;
	cout<<"enter the digit : ";
	cin>>n;
	
   while(n!=0)
	{
		int digit = n % 10;
		product = product * digit;
		sum = sum + digit;
		n=n/10;
	}
	
	answer=product-sum;
	cout<<"answer is : "<<answer;
	return 0;	
}