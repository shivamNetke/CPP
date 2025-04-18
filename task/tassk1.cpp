// task
// date : 11/04/25
// author : shivam netke

#include<iostream>
using namespace std;

class Demo{
    private:
    static int objCreated;
    static int objalive;

    public:

    Demo(){
        objCreated++;
        objalive++;
    }
    ~Demo(){
        objalive--;
    }

    static void display()
    {
        cout<<objCreated<<" obj created."<<objalive<<" obj alive"<<endl;
    }
};

int Demo::objCreated = 0;
int Demo::objalive = 0;

int main(void)
{
    Demo::display();
    {
        Demo obj1;
        Demo::display();
    }
    Demo obj2;
    Demo::display();    
    Demo obj3;
    Demo::display();
    return 0;
}