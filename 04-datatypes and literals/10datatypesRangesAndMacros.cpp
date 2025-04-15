#include<iostream>
#include<climits> // for int, char macros
#include<cfloat>  // for float double macros
using namespace std;
int main(void)
{
    cout<<"char ranges from : "<<CHAR_MIN<<" to "<<CHAR_MAX<<endl;
    cout<<"\n short int ranges from : "<<SHRT_MIN<<" to "<<SHRT_MAX<<endl;
    cout<<"\nint ranges from : "<<INT_MIN<<" to "<<INT_MAX<<endl;
    cout<<"\nlong int ranges from : "<<LONG_MIN<< " to "<<LONG_MAX<<endl;
    cout<<"\nfloat ranges from : "<<FLT_MIN<<" to "<<FLT_MAX<<endl;
    return 0;
}