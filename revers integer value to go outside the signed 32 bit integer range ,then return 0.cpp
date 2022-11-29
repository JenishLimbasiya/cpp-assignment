#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter the number : ";
	cin>>x;
	
	long long int ans = 0;
	while(x!=0)
	{
		int lastdigit = x%10;
		ans= ans*10+lastdigit;
		if(ans>INT_MAX || ans<INT_MIN)
		{
		    return 0;
		}
		x=x/10;
	}
	cout<<"answer is : "<<ans;
}