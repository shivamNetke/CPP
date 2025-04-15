#include<iostream>
using namespace std;

int main(void)
{
    int i = 0;

    // outer loop to print each row
    while( i < 4)
    {
        int j = 0;

        // inner loop to print each charecter in each row
        while(j < 4)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}