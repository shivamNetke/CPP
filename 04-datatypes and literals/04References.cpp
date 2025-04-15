#include<iostream>
using namespace std;
int main(void)
{
    int x = 10;

    int &ref = x; // reference derived type ref is a reference to x.

    ref = 20; // value of x is now changed to 20
    cout<<"x = "<< x <<endl;

    x = 30; // value of x is now changed to 30
    cout<<"ref = "<<ref<<endl;

    return 0;
}