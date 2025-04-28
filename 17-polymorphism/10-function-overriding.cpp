// Function Overriding Example
// Compile Time
#include <iostream>
using namespace std;

class Base
{
public:
  void Display()
  {
    cout << "In Base class Display" << endl;
  }
};

class Derived : public Base
{
public:
  void Display()
  {
    cout << "In Derived class Display" << endl;
  }
};

int main()
{

  Base bObj;
  Derived dObj;

  bObj.Display(); // "In Base class Display"
  dObj.Display(); // "In Derived class Display" 

  return 0;
}