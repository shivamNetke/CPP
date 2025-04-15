#include<iostream>
using namespace std;
int main(void)
{
    int var = 20;
    int *ptr; // pointers derived type declare pointer variable

    ptr = &var; // note that data type of ptr and var must be same

    cout<<"value at ptr = "<<ptr <<endl; // assign the address of a variable to a pointer
    cout<<"value at var = "<<var <<endl; 
    cout<<"value at *ptr = "<< *ptr;

    return 0;
}