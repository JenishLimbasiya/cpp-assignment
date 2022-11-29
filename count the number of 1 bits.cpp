#include<iostream>
using namespace std;
int main()
{
	int n, answer=0;
	cout<<"enter the number : ";
	cin>>n;
	
	while(n!=0)
	{
		if(n&1)
		{
			answer++;
		}
		n=n>>1;
		
	}
	cout<<"answer is : "<<answer;
	return 0;
}