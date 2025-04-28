#include<iostream>
using namespace std;

class animal {
    public:
    virtual void sound(){      // virtual function
        cout<<"animal makes a sound "<<endl;
    }   
};

class dog : public animal{
    public:
    void sound() override{
        cout<<"dog barks"<<endl;
    }
};

class cat : public animal{
    public:
    void sound() override{
        cout<<"cat meows"<<endl;

    }
};

int main(void)
{
    animal *a;  // pointer of base class
    dog d;
    cat c;
     
    a = &d;
    a->sound();// output : dog barks

    a = &c;
    a->sound();// output : cat meows

    return 0;
}