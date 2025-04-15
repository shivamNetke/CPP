#include <iostream>
using namespace std;

struct A // declaring structure
{
    int i;
    char c;
};

int main(void)
{
    A a;  // create an instance of structure

    a.i = 65; // initialize structure member
    a.c = 'A';

    cout<<a.c<<" : "<<a.i;

    return 0;
}