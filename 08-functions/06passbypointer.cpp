#include<iostream>
using namespace std;

int main(void)
{
    int a = 10;
    cout<<"a = "<<a <<endl;

    int *ptr  = &a;

    cout<<"*ptr = "<<(*ptr);

    *ptr = 20;

    cout<<" a = "<<a <<endl;
    cout<<"*ptr = "<<(*ptr);

    return 0;
}