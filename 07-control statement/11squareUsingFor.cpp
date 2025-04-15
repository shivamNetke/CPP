#include<iostream>
using namespace std;

int main(void)
{
    // outer loop to print each row
    for(int i = 0; i < 4; i++)
    {
        // inner loop to print each charecter in each row
        for(int j = 0; j < 4; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}