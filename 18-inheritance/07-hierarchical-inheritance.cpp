#include <iostream>
using namespace std;

class Base
{
public:
  int no1;
  int no2;

  Base()
  {
    cout << "In Base Constructor" << endl; // 1
    // code
  }

  ~Base()
  {
    cout << "In Base Destructor" << endl;
    // code
  }

  void Display()
  {
    cout << "In Base1 Display()" << endl;
  }
};

class Derived1 : public Base
{
public:
  int no3;
  int no4;

  Derived1()
  {
    cout << "In Derived1 Constructor" << endl; // 2
    // code
  }

  ~Derived1()
  {
    cout << "In Derived1 Destructor" << endl;
    // code
  }

  void Display()
  {
    cout << "In Derived1 Display()" << endl;
  }
};

class Derived2 : public Base
{
public:
  Derived2()
  {
    // Base1()
    // Base2()
    cout << "In Derived2 Constructor" << endl; // 3
  }

  ~Derived2()
  {
    cout << "In Derived2 Destructor" << endl; // 4
    // Base2()
    // Base1()
  }
};

int main()
{

  Derived2 d2Obj;
  cout << "sizeof d2Obj = " << sizeof(d2Obj) << endl; // 8

  return 0;
}