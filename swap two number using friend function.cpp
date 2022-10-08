#include<iostream>
using namespace std;

class number
{
    private:
    int x,y;
    
    public:
    void getswape()
    {
        cout<<"enter the first numbers : ";
        cin>>x;
        cout<<"enter the second numbers : ";
        cin>>y;
        cout<<"befor swaping : "<<"x : "<<x<<"  y : "<<y<<endl;
    }
    friend void swapnumber(number s);
};

void swapnumber(number s)
{
    s.x=s.x+s.y;
    s.y=s.x-s.y;
    s.x=s.x-s.y;
    cout<<"after swaping the number : "<<"x = "<<s.x<<" y = "<<s.y;
}

int main()
{
    number ob;
    ob.getswape();
    swapnumber(ob);
    return 0;
}