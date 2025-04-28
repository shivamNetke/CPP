// program to demonstrate functioning of friend class

#include<iostream>
using namespace std;

class g{
    private:
    int privateVariable;

    protected:
    int protectedVariable;

    public:
    g()
    {
        privateVariable = 10;
        protectedVariable = 20;
    }

    friend class f;  // friend class declaration

};

class f{
    public:
    void display(g &reft)   // g is type of object // &t is reference name for g
    {
        cout<<"the value of private variable = "<<reft.privateVariable<<endl;
        cout<<"the value of protected variable = "<<reft.protectedVariable<<endl;
    }
};

int main(void)
{
    g gObj;
    f fObj;

    fObj. display(gObj);
    return 0;
}