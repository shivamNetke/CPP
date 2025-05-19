#include<iostream>
using namespace std;
int main(void)
{
    #ifdef DEBUG
    cout<<"DEBUG mode on"<<endl;
    #endif

    #ifndef DEBUG
    cout<<"DEBUG mode is off"<<endl;
    #endif

    cout<<"hello world"<<endl;

    return 0;
}