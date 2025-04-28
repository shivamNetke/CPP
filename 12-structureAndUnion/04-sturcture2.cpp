#include <iostream>
using namespace std;

struct Demo{
private:
  int iNo1;
  int iNo2;

public:
  int add()
  {
    cout<<"addition of "<<iNo1<<" and "<<iNo2<<" is : ";
    return iNo1 + iNo2;
  }

  void print()
  {
   cout<<"iNo1 = "<<iNo1<<endl;
   cout<<"iNo2 = "<<iNo2<<endl;
  }

  void scan()
  {
    cout<<"enter ino1 value : ";
    cin>>iNo1;
    cout<<"enter ino2 value : ";
    cin>>iNo2;
  }
};


int main(void)
{
  struct Demo d1;

  d1.scan();
  d1.print();
  cout<<d1.add()<<endl;
  return 0;
}