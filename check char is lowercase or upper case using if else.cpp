#include<iostream>
using namespace std;
int main()
{
	char ch,x;
	cout<<"enter the character : ";
	cin>>ch;

     if(ch>='a'&& ch<='z')
     {
     	cout<<"lower case";
	 }
	 else 
	 {
	 	cout<<"upper case";
	 }
     return 0;
}