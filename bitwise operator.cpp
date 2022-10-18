#include<iostream>
using namespace std;
int main()
{
	int a=2;
	for(int i=0;i<=15;i++)
	{
	cout<<i<<" ";
	
		if(i&a)
		{  
			continue;
		}
		i++;
	}
	return 0;
}
