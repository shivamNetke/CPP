#include <iostream>
using namespace std;

class Base
{
public:
  int no1;
  int no2;

  Base()
  {
    cout << "In Base Constructor" << endl;
    // code
  }

  ~Base()
  {
    cout << "In Base Destructor" << endl;
    // code
  }

  void Display()
  {
    cout << "In Base Display()" << endl;
  }
};

class Derived1 : public Base
{
public:
  int no3;
  int no4;

  Derived1()
  {
    // Base()
    cout << "In Derived1 Constructor" << endl;
    // code
  }

  ~Derived1()
  {
    cout << "In Derived1 Destructor" << endl;
    // code
    // ~Base()
  }

  // void Display()
  // {
  //   cout << "In Derived1 Display()" << endl;
  // }
};

class Derived2 : public Derived1
{
public:
  int no5;
  int no6;

  Derived2()
  {
    // Derived1()
    cout << "In Derived2 Constructor" << endl;
    // code
  }

  ~Derived2()
  {
    cout << "In Derived2 Destructor" << endl;
    // code
    // ~Derived1()
  }

  // void Display()
  // {
  //   cout << "In Derived2 Display()" << endl;
  // }
};

int main()
{

  Derived2 d2Obj;
  cout << "sizeof d2Obj = " << sizeof(d2Obj) << endl; // 24

  d2Obj.Display();

  return 0;
}