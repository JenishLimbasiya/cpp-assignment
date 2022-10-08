#include<iostream>
using namespace std;
inline int mul(int a,int b)
{
	return a*b;
}
int main()
{
	int a=4,b=6;
	
	cout<<"multiplication : "<<mul(a,b);
	return 0;
}