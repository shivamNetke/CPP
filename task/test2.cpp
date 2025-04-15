#include<iostream>
using namespace std;

class Base{

public:
    int no1;
    int no2;

    Base()
    {
        cout<<"in base constructor"<<endl;
    }
    ~Base()
    {
        cout<<"in base destructor"<<endl;
    }
    void Display()
    {
        cout<<"in base display()"<<endl;
    }
};

class Derived : public Base
{
    public:
    int no3;
    int no4;

    Derived()
    {
        cout<<"in derived constructor"<<endl;
    }

    ~Derived()
    {
        cout<<"in derived destructor"<<endl;
    }

    void Display()
    {
        cout<<"in derived display"<<endl;
    }
};


int main(void){
    Derived dObj;

    return 0;
}