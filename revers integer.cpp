#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number : ";
	cin>>n;
	int ans=0,i=0;
	while(n!=0)
	{
		int digit = n%10;
		
		if((ans>INT_MAX/10) || (ans<INT_MIN/10))
		{
			cout<<"became larger than the range of integer";
			return 0;
		}
		
		ans=(ans*10)+digit;
		n=n/10;
		
	}
	cout<<"revers number is : "<<ans;
	return 0;
}