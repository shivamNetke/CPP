#include<iostream>
using namespace std;

int main(void)
{
    int value = 42;
    clog<<"program started..."<<endl;

    if(value <= 0)
    {
        cerr<<"error : value must be positive "<<endl;
    }
    else
    {
        clog<<"value is valid : "<<value<<endl;

    }
    return 0;

}