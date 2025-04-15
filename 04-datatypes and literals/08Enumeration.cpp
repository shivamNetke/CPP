#include<iostream>
using namespace std;

enum Week { mon, tue, wed, thur, fri, sat, sun };  // declaring enum

int main(void)
{
    enum Week day;  // creating enum variable

    day = wed;  // assigning value to the variable

    cout<<day;
    return 0;
}