#include<iostream>
using namespace std;
int main()
{
	int amount;
	cout<<"enter the amount : ";
	cin>>amount;
	int rs100, rs50, rs20, rs1;
	
	switch(1)
	{
		case 1: 
		        rs100=amount/100;
		        amount=amount%100;
		        cout<<"100 Rupees notes required are : "<<rs100<<endl;
		        
		        
	   case 2: rs50=amount/50;
		        amount=amount%50;
		        cout<<"50 Rupees notes required are : "<<rs50<<endl;
		        
    	case 3: rs20=amount/20;
		        amount=amount%20;
		        cout<<"20 Rupees notes required are : "<<rs20<<endl;
		        
    	case 4: rs1=amount/1;
		        amount=amount%1;
		        cout<<"1 Rupees notes required are : "<<rs1<<endl;
		        
	}
	return 0;
}