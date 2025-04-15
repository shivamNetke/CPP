#include<iostream>
using namespace std;

class Base1{

public:
    int no1;
    int no2;

    Base1()
    {
        cout<<"in base1 constructor"<<endl;
    }
    ~Base1()
    {
        cout<<"in base1 destructor"<<endl;
    }
 
};

class Base2{

    public:
        int no3;
        int no4;
    
        Base2()
        {
            cout<<"in base2 constructor"<<endl;
        }
        ~Base2()
        {
            cout<<"in base2 destructor"<<endl;
        }
     
    };

class Derived : public Base1, public Base2
{
    public:
    Derived(){
        cout<<"in derived constructor"<<endl;
    }
    ~Derived(){
        cout<<"in derived distructor"<<endl;
    }
};


int main(void){
    Derived dObj;
    cout<<"sizeof dObj = "<<sizeof(dObj)<<endl;

    return 0;
}