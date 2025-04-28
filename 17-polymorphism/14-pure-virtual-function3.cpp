
#include <iostream>
using namespace std;

// Abstract Class
class Base
{
public:
  int no1;

  virtual void Display() = 0; // pure virtual function
};

// Abstract class
class Derived : public Base
{
public:
  int no2;

  void Show()
  {
    cout << "Hello From Derived Show" << endl;
  }
};

int main(void)
{
  Derived dObj;
  return 0;
}

/*
    getting errors in compile time because we didnt write display function body in derived class
    
*/