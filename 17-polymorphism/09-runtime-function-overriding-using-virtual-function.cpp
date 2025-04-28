#include<iostream>
using namespace std;

class base{
    public:
    virtual void display()  // declare functiona as virtual to allow overriding in derived class
    {
        cout<<"display method of base class"<<endl;
    }

    virtual ~base(){

    }    
};

class derived : public base{
    public:
    // override the display method
    void display() override // override keyword is optional
    {
        cout<<"display method of derived class"<<endl;

    }
};

int main(void)
{
    base *bPtr;
    derived *dPtr;

    bPtr->display();

    return 0;
}