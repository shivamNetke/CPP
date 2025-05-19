#include<iostream>
#define NUM 1
using namespace std;
int main(void)
{
    // preprocessor directives
    #if NUM == 1
        cout<<"num is 1"<<endl;
    
    #elif NUM == 2
        cout<<"num is 2"<<endl;

    #elif NUM == 3
        cout<<"num is 3"<<endl;

    #endif 


    // if else

    if (NUM == 1)
    {
        cout<<"num is 1"<<endl;
    }
    else if (NUM == 2)
    {
        cout<<"num is 2"<<endl;
    }
    else if (NUM == 3)
    {
        cout<<"num is 3"<<endl;
    }
    else{
        cout<<"in else"<<endl;
    }
}