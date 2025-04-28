#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<"in base display function"<<endl;
    }
};

class derived : public base{
    public:
    void display()
    {
        cout<<"in derived display function"<<endl;
    }
};

int main(void)
{
    derived dObj;
    dObj.display();

    return 0;
}