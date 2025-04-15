#include<iostream>
using namespace std;

int main(void)
{
    // variable to the used as switch expression
    char x = 'A';

    // switch statement with three cases
    switch(x)
    {
        case 'A':
            cout<<"A";
            break;

        case 'B':
            cout<<"B";
            break;
        
        default:
            cout<<"other than a or b";
            break;
    }
    return 0;
}