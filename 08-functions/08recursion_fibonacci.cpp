// cpp program to find fibonacci series using recursion
#include<iostream>
using namespace std;

// function for fibonacci
int fib(int n)
{
    // stop condition
    if(n == 0)
    {
        return 0;
    }
    if(n ==1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n-1) + fib(n-2));
    }
}

int main(void)
{
    int n = 5;  // initialize variable n
    
    cout<<"fibonacci series of 5 number is : ";

    // for loop to print the fibonacci series.
    for(int i = 0; i < n; i++)
    {
        cout<<fib(i)<<" ";
    }
    return 0;
}