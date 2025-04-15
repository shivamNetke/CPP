#include<iostream>
using namespace std;

int main(void)
{
    int n = 5;

    int sum = 0;

    // while loop to calculate the sum
    while(n > 0)
    {
        sum = sum + n;
        n--;
    }
    cout<<sum;
    return 0;
}