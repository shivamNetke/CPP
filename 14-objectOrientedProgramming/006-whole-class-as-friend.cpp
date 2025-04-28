#include<iostream>
using namespace std;

class Demo2; // forward declaration

class Demo1{
    private:
    int no1;

    protected:
    int no2;

    public:
    Demo1()
    {
        no1 = 10;
        no2 = 20;
    }

    friend class Demo2; // friend declaration
};

class Demo2 {
    public:
    void display()
    {
        Demo1 obj;
        cout<<"obj no1 = "<<obj.no1<<endl;
        cout<<"obj no2 = "<<obj.no2<<endl;
    }
};

int main(void)
{
    Demo2 obj2;
    obj2.display();
}