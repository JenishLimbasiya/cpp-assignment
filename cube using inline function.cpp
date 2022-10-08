#include<iostream>
using namespace std;
inline int cube(int a)
{
	return a*a*a;
}
int main()
{
	int a=2;
	cout<<"cubic value : "<<cube(2);
	return 0;
}