#include<iostream>
using namespace std;

union A   // declaration of union is same as the structures
{
    int i;
    char c;
};

int main(void)
{
    A a;  // a union variable t

    a.c = 'A';  // assigning value to c, i will also assigned the same

    cout<<"a.i : "<<a.i<<endl;
    cout<<"a.c : "<<a.c;

    return 0;
}