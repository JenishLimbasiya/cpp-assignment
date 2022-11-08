#include<iostream>
using namespace std;

class father
{
	protected:
	int fatherproperty=100;
	int fathermoney=100;
	
	int motherproperty=fatherproperty;
	int mothermoney=fathermoney-40;
	
	public:
			void father_wealth()
        	{
			cout<<"    father WEALTH"<<endl;
			cout<<"=> father property : "<<fatherproperty<<endl<<"=> father money : "<<fathermoney<<endl<<endl;		
	    	}
};

class mother:public father
{
    	protected:
		
	    	int sonproperty=motherproperty-60;
			
			int daughterproperty=motherproperty-40;
			int daughtermoney=mothermoney-50;
		
		public:
		void mother_wealth()
		{
			cout<<"    MOTHER WEALTH"<<endl;
			cout<<"=> mother property : "<<motherproperty<<endl<<"=> mother money : "<<mothermoney<<endl<<endl;		
		}
};

class son : public mother
{
	public:
		void son_wealth()
		{
			cout<<"    SON WEALTH"<<endl;
			cout<<"=>son property : "<<sonproperty<<endl<<endl;
		}	
};

class daughter : public mother
{
	public:
		
		void daughter_wealth()
		{
			cout<<"   DAUGHTER WEALTH"<<endl;
			cout<<"=>daughter property : "<<daughterproperty<<endl<<"=>daughter money : "<<daughtermoney;
		}		
};
int main()
{
	son obj1;
	obj1.father_wealth();
	obj1.mother_wealth();
	obj1.son_wealth();
	
	daughter obj2;
	obj2.daughter_wealth();
	
	return 0;
}
