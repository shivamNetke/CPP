// ambiguity task
// date : 15/4/25
// author : shivam netke

#include <iostream>
using namespace std;

class Demo1 {
public:
    void display() {
        cout << "hello shivam Demo1" << endl;
    }
};

class Demo2 {
public:
    void display() {
        cout << "hello shivam Demo2" << endl;
    }
};

class Demo3 : public Demo1, public Demo2 {
public:
    void show()
    {
        Demo1::display();
        Demo2::display();
    }
};

int main(void) {
    Demo3 obj;

    obj.show(); 

    

    return 0;
}

/*
output

hello shivam Demo1
hello shivam Demo2

*/ 