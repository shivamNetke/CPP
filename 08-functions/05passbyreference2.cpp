#include<iostream>
using namespace std;

void increment(int &num1)
{
    num1 = 10;
}

int main(void)
{
    int num = 20;

    cout<<"num = "<<num<<endl;
    increment(num);

    cout<<"num = "<<num<<endl;

    return 0;
}