#include<iostream>
using namespace std;
class crickter
{
	public:
	float total_run;
	float average;
	string bestperformence;
};

class bastmen:public crickter
{
	public:
    void get()
    {
   	cout<<"enter the total run : ";
    cin>>total_run;
    cout<<"enter best performence : ";
    cin>>bestperformence;
	}
	
	void average1()
	{
		average=total_run/20;
	}
	
	void display()
	{
		cout<<"\n\ntotal run : "<<total_run<<endl;
		cout<<"average is : "<<average<<endl;
		cout<<"best performence : "<<bestperformence<<endl;
	}
};
int main()
{
	bastmen obj;
	obj.get();
	obj.average1();
	obj.display();
	return 0;
}