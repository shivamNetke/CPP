#include<iostream>
using namespace std;
int main(void)
{
    int num = 42;
    cout.width(10);
    cout.fill('0');   // set fill char to '0'
    cout<<num<<endl;  // output : 0000000042

    return 0;
}