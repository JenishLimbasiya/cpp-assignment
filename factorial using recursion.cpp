#include<iostream>
using namespace std;

int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
    //int smallproblem=factorial(n-1);
    //int biggerproblem=n*smallproblem;

	return n*factorial(n-1);
}
int main()
{
	int n;
	cout<<"enter the number : ";
	cin>>n;
	
	cout<<factorial(n);
	return 0;
}