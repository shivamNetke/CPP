#include<iostream>
using namespace std;

int main(void)
{
    const char* str = "hello world";
    cout.write(str, 5); // outputs "hello", only first five charecters

    return 0;
}