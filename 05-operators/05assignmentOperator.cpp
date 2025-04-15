#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int a = 6, b = 4;

    // assignment operator
    cout<<"a = "<<a <<endl;
    
    // add and assignment operator
    cout<<"a += b is "<<(a += b)<<endl;

    // substract and assignment operator
    cout<<"a -= b is "<<(a -= b)<<endl;

    // multiply and assignment operator
    cout<<"a *= b is "<<(a *= b)<<endl;

    // divide and assignment operator
    cout<<"a /= b is "<<(a /= b)<<endl;

    return 0;
}