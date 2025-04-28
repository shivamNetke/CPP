
#include <iostream>
using namespace std;

// Abstract Class
class Base
{
public:
  int no1;

  virtual void Display() = 0; // pure virtual function
};

int main(void)
{
  Base bObj;
  return 0;
}

/*
    getting errors in compile time because we didnt write display function body in derived class
    
*/