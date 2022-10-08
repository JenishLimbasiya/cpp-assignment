#include<iostream>
using namespace std;
class aditya
{
	int money=500;
	public:
	friend void kevil(aditya a);
	friend void jenish(aditya b);
};
void kevil(aditya a)
{   
     int value;
     cout<<"enter the value : ";
     cin>>value;
     if(a.money>=value&&value<=300)
     {
     	cout<<"kevil : "<<value<<endl;
	 }
     else
     {
     	cout<<"i have not "<<value<<" Rs sorry...."<<endl;
	 }
}
void jenish(aditya b)
{
	int value;
     cout<<"enter the value : ";
     cin>>value;
     if(b.money>=value&&value<=200)
     {
     	cout<<"kevil : "<<value<<endl;
	 }
     else
     {
        cout<<"i have not "<<value<<" Rs sorry..."<<endl;
	 }
}
int main()
{
	aditya obj;
	kevil(obj);
	jenish(obj);
	return 0;
}
	