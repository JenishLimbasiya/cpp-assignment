#include<iostream>
using namespace std;

template<typename swap>

swap test(swap a,swap b)
{
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b;
	
	a=a+b; 
	b=a-b;
	a=a-b;
	cout<<"\n\nafter swaping numbers : "<<endl;
	cout<<"a : "<<a<<endl;
	cout<<"b : "<<b;
}
int main()
{
    test(10,5);
    return 0;
}
