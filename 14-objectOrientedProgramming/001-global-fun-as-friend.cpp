#include<iostream>
using namespace std;

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

    friend void friendFunction(base &obj); // friend function declaration // [ obj is nickname of object1]

};

void friendFunction(base &obj) // friend function defination // [ obj is nickname of object1]
{
    cout<<"private variable = "<<obj.privateVariable<<endl;
    cout<<"protected variable = "<<obj.protectedVariable;

}

int main(void)
{
    base object1;
    friendFunction(object1);

    return 0;
}