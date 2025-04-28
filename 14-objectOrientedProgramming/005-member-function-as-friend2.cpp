#include<iostream>
using namespace std;

// forward declaration
class demo2
{
    public:
    void fun1();
    void fun2();
};

class demo1{
    private: 
    int no1;

    friend void demo2::fun2(); // friend declaration

    public:
    demo1()
    {
        no1 = 10;
    }
};

// demo2 member function declaration

void demo2::fun1()
{
    cout<<"in demo2 fun1 "<<endl;
    demo1 obj;

    cout<<"out demo2 fun1"<<endl;
}

void demo2::fun2()
{
    cout<<"in demo2 fun2"<<endl;
    demo1 obj;
    cout<<"obj1 no1 = "<<obj.no1<<endl;
    cout<<"out demo2 fun2"<<endl;
}

int main()
{
    demo2 obj2;
    obj2.fun1();
    obj2.fun2();

    return 0;
}
