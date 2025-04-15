#include<iostream>
using namespace std;
int main(void)
{
    const int n = 5;
    const int* ptr = &n;  // pointer to a const int

    // int* nonConstPtr = ptr; if we use this
    // instead of without using const cast
    // we will get error of invalid conversion

    int* nonConstPtr = const_cast<int*>(ptr);

    cout<<*nonConstPtr;
    return 0;
}