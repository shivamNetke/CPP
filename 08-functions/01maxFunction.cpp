#include<iostream>
using namespace std;

// following function that takes two parameters 'x' and 'y' as input and returns max of two input numbers
int max(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

// main function that doesnt receive any parameter and return integer

int main(void)
{
    int a = 10, b = 20;

    // calling above function to find max of 'a' and 'b' 
    int m = max(a, b);

    cout<<"m is "<<m;

    return 0;
}