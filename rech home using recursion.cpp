#include<iostream>
using namespace std;
void rechhome(int start,int destination)
{
	if(start==destination)
	{
		cout<<"wellcome home....!";
		return;
	}
	
    start++;
    
    rechhome(start,destination);
}
int main()
{
	int destination=10;
	int start=1;
	rechhome(start,destination);
	return 0;
}