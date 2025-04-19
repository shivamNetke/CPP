#include<iostream>
using namespace std;
int main(void)
{
    int arr[] = {1, 2, 3, 4};// defining an array

    int *ptr = arr;

    // printing address of the array using array name
    cout<<"memory address of arr = "<<&arr<<endl;

    // printing address of the array using ptr
    cout<<"memory address of arr = "<< ptr <<endl;

    return 0;
}