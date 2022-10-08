#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
    int row=1;
   // char ch='A';
    while(row<=n)
    {
    	int col=1;
    	while(col<=row)
    	{
    		char ch='a'+row+col-2;
    		cout<<ch<<" ";
    		//ch++;
    		col++;
		}
		cout<<endl;
		row++;
	}
	return 0;
}