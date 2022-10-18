#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter number : ";
	cin>>n;
	
	for(int i=0;i<=30;i++)
	{
		int ans=pow(2,i);
		
		if(ans==n)
		{
			cout<<"it is a power of two";
			return 0;
		}
	}
	cout<<"not power of two";
	return 0;
}