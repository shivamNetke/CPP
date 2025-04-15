// task
// date : 15/4/25
// author : shivam netke
#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "hello shivam a" << endl;
    }
};

class B {
public:
    void display() {
        cout << "hello shivam b" << endl;
    }
};

class C : public A, public B 
{
public:
    void callDisplay() {
        this->display();  
}
};

int main(void) {
    C obj;
    obj.callDisplay(); 
    return 0;
}
