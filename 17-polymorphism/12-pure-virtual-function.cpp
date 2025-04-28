#include <iostream>
using namespace std;

class Base {
    int x;

public:
    // pure virtual function
    virtual void fun() = 0;

    int getX() 
    { 
        return x; 
    }
};

class Derived : public Base {
    int y;

public:
    // implementation of the pure virtual function
    void fun() 
    { 
        cout << "fun() called"; 
    }

    /*
    if we didnt make this this program will not run 
    
    void fun() 
    { 
        cout << "fun() called"; 
    }
        
    */
};

int main(void)
{
    // creating an object of Derived class
    Derived d;

    // calling the fun() function of Derived class
    d.fun();

    return 0;
}