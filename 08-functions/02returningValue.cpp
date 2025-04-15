// cpp code to illustrate method returning a value using return statement

#include<iostream>
using namespace std;

// non void return type function to calculate sum

int SUM(int a, int b)
{
    int s1 = a + b;

    // method using the return statement to return a value

    return s1;
}

// driver method

int main(void)
{
    int num1 = 10;
    int num2 = 10;
    int sumof = SUM(num1, num2);
    cout<<"the sum is : "<<sumof;

    return 0;
}