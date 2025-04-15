#include<iostream>
using namespace std;

int main(void)
{
    for(int i = 1; i<10; i++)
    {
        // skip the execution for i = 5
        if(i == 5)
        {
            continue;
        }
        cout<<i<<" ";
    }
    return 0;
}