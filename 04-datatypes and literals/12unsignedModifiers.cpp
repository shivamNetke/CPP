#include<iostream>
using namespace std;
int main(void)
{
    unsigned int unsigned_i = -10;  // declaring unsigned integer with negative value
    int i = -10; // declaring normal integer with negative value

    cout<<"unsigned_i : "<<unsigned_i<<endl;
    cout<<"unsigned int size : "<<sizeof(unsigned_i)<<" bytes"<<endl;
    cout<<"i : "<<i <<endl;
    cout<<"int size : "<<sizeof(i)<<" bytes";

    return 0;
}