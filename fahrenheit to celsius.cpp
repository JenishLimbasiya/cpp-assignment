#include<iostream>
using namespace std;
int main()
{
	float fahrenheit;
	cout<<"enter the fahrenheit : ";
	cin>>fahrenheit;
	
	float Celsius = (5.0/9) * (fahrenheit - 32);
	cout<<Celsius<<"C "<<endl;
	
	return 0;
 } 