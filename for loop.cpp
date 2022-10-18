#include<iostream>
using namespace std;
int main()
{ 
  for(int i=1;i<5;i++)
  {
     for(int j=i;j<=5;j++)
	 {
	  	int a=i+j;
	
	  	if(a==5)
	  	{
	  	break;
	    }
	    cout<<endl<<i<<"  "<<j<<endl;
	 }  
  }  
}   