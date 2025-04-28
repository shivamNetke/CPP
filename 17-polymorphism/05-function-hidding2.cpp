#include<iostream>
using namespace std;

class Base
{
    public:
    void Display1()
    {
        cout<<"in base Display1 "<<endl;
    }

    void Display1(int x)
    {
        cout<<"in base display 1 param x = "<<x<<endl;
    }

};

class Derived : public Base{
    public :
    void Display1()
    {
        cout <<"in derived display1"<<endl;
    }
};

int main(void)
{
    Derived dObj;
    dObj.Display1();
}