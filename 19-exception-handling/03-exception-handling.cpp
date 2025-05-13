// Exception Code
#include <iostream>
using namespace std;

int main()
{
  int no1 = 10;
  int no2 = 0;

  cout << "Enter a number : ";
  cin >> no2;

  int res = 0;
  try
  {
    if (no2 == 0)
    {
      throw 1;
    }
    res = no1 / no2;
  }
  catch (int a)
  {
    cout << "In Catch a = " << a << endl;
  }

  cout << "Result = " << res;
  return 0;
}