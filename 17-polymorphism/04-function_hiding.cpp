#include<iostream>

using namespace std;

class Base
{
    public:
    void Display1()
    {
        cout<<"in base display1"<<endl;
    }

    void Display1(int x)
    {
        cout<<"in base display 1 param x = "<<x<<endl;
    }
};

class Derived : public Base{
    public:
    void Display1(){
        cout<<"in derived display1"<<endl;
    }
};

int main(void)
{
    Derived dObj;
    dObj.Display1();
    // dObj.Display1(10);  // error: no matching function for call to 'Derived::Display1(int)'
    dObj.Base::Display1(10);

    return 0;
}

// --OUTPUT-- 
// in derived display1
// in base display 1 param x = 10