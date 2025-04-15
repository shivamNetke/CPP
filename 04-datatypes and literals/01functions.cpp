#include<iostream>
using namespace std;

int max(int x, int y) // max here is a function which is a derived type
{
    if(x > y)
        return x;
    else
        return y;
}

int main(void) // main function is also a derived type
{
    int a = 10, b = 20;
    int m = max(a, b);  // calling above function to find the max of a and b

    cout<<"maximum between "<<a<<" and "<<b<<" is "<<m;
    return 0;

}