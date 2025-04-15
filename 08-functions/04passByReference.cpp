// cpp program to illustrate the use of pass by reference

#include<iostream>
using namespace std;

int main(void)
{
    int ronaldo = 7;

    int &cr7 = ronaldo;

    cout<<"ronaldo = "<<ronaldo<<endl;

    cout <<"cr7 = "<<cr7<<endl;

    cr7 = 10;

    cout<<"ronaldo = "<<ronaldo<<endl;

    cout<<"cr7 = "<<cr7<<endl;

    return 0;
}