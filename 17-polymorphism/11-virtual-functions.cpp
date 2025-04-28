
#include <iostream>
using namespace std;

class base {
public:
    virtual void print()
    { 
        cout << "in base virtual void print function"<<endl;
    }

    void show() 
    { 
        cout << "in base void show function"<<endl; 
    }
};

class derived : public base {
public:
    void print() 
    { 
        cout << "in derived void print function"<<endl; 
    }

    void show() 
    { 
        cout << "in derived void show function"<<endl; 
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    bptr->print();
    bptr->show();

    return 0;
}
