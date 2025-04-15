#include<iostream>
using namespace std;
int main(void)
{
    int var = 10;
    const int c = 24;  // declaring a constant variable
    cout<<c<<endl;

    c = 0;  // trying to change the value constant c
    // getting error on line 9 bcoz we cant change const var
    
    cout<<c;
    return 0;
}