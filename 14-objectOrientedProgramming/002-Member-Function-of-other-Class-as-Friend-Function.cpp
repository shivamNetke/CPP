#include <iostream>
using namespace std;

class base;  // forward defination needed. another class in which function is declared

class anotherClass{
    public:
    void memberFunction(base &obj);
};

// base class for which friend is declared
class base{
    private:
    int privateVariable;

    protected:
    int protectedVariable;

    public:
    base()
    {
        privateVariable = 10;
        protectedVariable = 20;
    }

    // friend function declaration
    friend void anotherClass::memberFunction(base &);
};

// friend function defination
void anotherClass::memberFunction(base &obj)
{
    cout<<"private variable = "<<obj.privateVariable<<endl;
    cout<<"protected variable = "<<obj.protectedVariable;
}

int main(void)
{
    base object1;
    anotherClass object2;
    object2.memberFunction(object1);

    return 0;
}