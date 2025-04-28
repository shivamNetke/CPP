#include <iostream>
using namespace std;

class demo{
    private:
    int no1;

    protected:
    int no3;

    friend void fun2(); // friend declaration

    public:
    int no2;

    demo()
    {
        no1 = 10;
        no2 = 20;
        no3 = 30;
    }
};

void fun2()
{
  demo obj;

  cout << "obj no1 =" << obj.no1 << endl; // allowed
  cout << "obj no2 =" << obj.no2 << endl; // allowed
  cout << "obj no3 =" << obj.no3 << endl; // allowed
}

// global fun1 function defination

void fun1()
{
    demo obj;
    // cout << "obj no1 =" << obj.no1 << endl; // error
    cout << "obj no2 =" << obj.no2 << endl; // allowed
    // cout << "obj no3 =" << obj.no3 << endl; // error
}
int main(void)
{
    fun1();
    fun2();

    return 0;
}