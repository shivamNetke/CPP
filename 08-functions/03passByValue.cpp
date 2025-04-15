// cpp program to illustrate the pass by value

#include<iostream>
using namespace std;

// function to swap variables

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int x = 5;
    int y = 10;

    cout<<"before swapping : \n";
    cout<<"x = "<<x<<"\ny = "<<y<<endl;

    // call the swap function with pass-by-value paramenters

    swap(x, y);

    // print the values of 'x' and 'y' after the (ineffective) swap the values remain unchanged because the function works on copies

    cout<<"after swapping : \n";
    cout<<"x = "<<x<<"\ny = "<<y<<endl;

    return 0;
}