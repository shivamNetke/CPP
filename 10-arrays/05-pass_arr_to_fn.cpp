#include<iostream>
using namespace std;

// passing array as a sized array argument
void printArraySized(int arr[3], int n)
{
    cout<<"array as sized array argument  : "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// passing array as a unsized array argument
void printArrayUnsized(int arr[], int n)
{
    cout<<"array as unsized array argument :"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// passing array as a pointer argument 
void printArrayPointer(int *ptr, int n)
{
    // print array elements using pointer ptr that store the address of array passed
    cout<<"aray as pointer argument : "<<endl;
    for(int i = 0; i< n; i++)
    {
        cout<<ptr[i]<<" ";
    }
}

int main(void)
{
    int arr[] = {10, 20, 30};

    // call function print array and pass array and its size to it
    printArraySized(arr, 3);
    printArrayUnsized(arr, 3);
    printArrayPointer(arr, 3);

    return 0;
}