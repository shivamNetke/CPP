// task
// date : 11/04/25
// author : shivam netke

#include<iostream>
using namespace std;

class Demo{
    public:
    static int objCreated;
    static int objalive;
    Demo(){
        objCreated++;
        objalive++;
        cout<<objCreated<<" obj created."<<objalive<<" obj alive"<<endl;
    }
    ~Demo(){
        objalive--;
        cout<<objCreated<<" obj created."<<objalive<<" obj alive"<<endl;
    }

};

int Demo::objCreated = 0;
int Demo::objalive = 0;

int main(void)
{
    Demo obj1;
    Demo obj2;
    Demo obj3;

    return 0;
}