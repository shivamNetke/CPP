#include<iostream>
using namespace std;
int main(void)
{
    int i = 10;
    char c = 'a';

    i = i + c; // c implicitly converted to int ASCII . value of 'a' is 97

    float f = i + 1.0; // x is implicitly converted to float

    cout<<"i = "<<i<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"f = "<<f;

    return 0;
}