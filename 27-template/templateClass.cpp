// template class

#include <iostream>
using namespace std;

template <typename T>
class MyClass {
private:
    T data;
public:
    MyClass(T d) {
        data = d;
    }
    void display() {
        cout << "Data: " << data << endl;
    }
};

int main() {
    MyClass<int> obj1(100);
    MyClass<string> obj2("Template Class");

    obj1.display();
    obj2.display();

    return 0;
}
// --OUTPUT-- 
// Data: 100
// Data: Template Class