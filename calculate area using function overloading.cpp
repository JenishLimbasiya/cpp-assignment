#include<iostream>
using namespace std;
class area
{
	public:
		
		void a(int x,int y)
	   	{
	   		int area=x;
	   		int breadth=y;
		    int rectangle=area*breadth;
			cout<<"area of rectangle : "<<rectangle<<endl;
		}
		
		void a(float j,float k,float n)
		{
			float area=j;
			float breadth=k;
			float s=n;
		    float triangle=(area*breadth*s);
		    cout<<"area of triangle : "<<triangle<<endl;
		}
			
		void a(double s,int l)
		{
			float pi=s;
			float area=l;
		    float circle=pi*area*area;	
		    cout<<"area of circle : "<<circle;
		}		
};
int main()
{
	area ob;
	
    ob.a(2,2);
    ob.a(4.0,2.0,0.5);
    ob.a(3.14,2);
	return 0;
}