#include<iostream>
using namespace std;

typedef float f;  // using typedef to define a new name for existing type

using integer = int ;  // using 'using' to define a new name for existing type

int main(void)
{
    f x = 3.14;  // declaring variables using new type names

    integer y = 42;

    cout<<"float value : "<<x<<endl;
    cout<<"integer value : "<<y;

    return 0;
}