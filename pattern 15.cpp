#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int row=1;
	while(row<=n)
	{
		int col=1;
		while(col<=n-row+1)
		{
			cout<<col;
			col++;
		}
		int star=row-1;
		while(star)
		{
			cout<<"*";
			star--;
		}
		int star1=row-1;
		while(star1)
		{
			cout<<"*";
			star1--;
		}
		int col1=n-row+1;
		while(col1)
		{
			cout<<col1;
			col1--;
		}
		cout<<endl;
		row++;
    }
    return 0;
}