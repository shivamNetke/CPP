#include<iostream>
using namespace std;

int main(void)
{
    // loop to print digits from 1 to 4
    for(int i = 1; i < 10; i++)
    {
        // breaking condition
        if(i == 5)
        {
            break;
        }
        cout<<i<<" ";
    }
    return 0;
}