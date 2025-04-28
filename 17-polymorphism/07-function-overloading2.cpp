#include <iostream>
using namespace std;

int Add(int no1 = 0, int no2 = 0)
{
  cout << "In Add 2 param" << endl;
  return no1 + no2;
}

int Add()
{
  cout << "In Add 0 param" << endl;
  return 0;
}

int main()
{
  cout<<"Add(10) = "<<Add(10)<<endl;     
  cout<<"Add(10, 20) = "<<Add(10, 20)<<endl; 

  return 0;
}
