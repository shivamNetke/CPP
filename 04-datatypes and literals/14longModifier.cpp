#include<iostream>
using namespace std;
int main(void)
{
    // printing the size of long and normal ints double and long double
    cout<<"int size : "<<sizeof(int)<<" bytes"<<endl; 
    cout<<"long int size : "<<sizeof(long int)<<" bytes"<<endl;
    cout<<"double size : "<<sizeof(double)<<" bytes"<<endl;
    cout<<"long double size : "<<sizeof(long double)<<" bytes";

    return 0;

}