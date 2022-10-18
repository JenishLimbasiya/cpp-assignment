#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter decimal number : ";
	cin>>n;
	
	int ans=0;
	int i=0;
	while(n!=0)
	{
	   int bit =n%2;
	   ans=(bit*pow(10, i))+ans;
	   n=n/2;
	   i++;	
	}
	cout<<"binary number is : "<<ans<<endl;
	return 0;
}