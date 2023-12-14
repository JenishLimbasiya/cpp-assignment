#include<iostream>
using namespace std;
int setbitB(int b)
{
	int count=0;
	while(b!=0)
	{
		if(b&1)
		{
			count++;
		}
		b=b>>1;
	}
	return count;
}

int setbitA(int a)
{
	int count=0;
	while(a!=0)
	{
		if(a&1)
		{
			count++;
		}
		a=a>>1;
	}
	return count;
}

int main()
{
	int a,b;
	cout<<"enter first number : ";
	cin>>a;
	cout<<"enter second number : ";
	cin>>b;
	
	int ans1=setbitB(b);
	int ans2=setbitA(a);
	
	cout<<"set bit of a : "<<ans2<<endl;
	cout<<"set bit of b : "<<ans1<<endl;
	
	int answer=ans1+ans2;
	cout<<"total set bit of a and b is : "<<answer;
	
}