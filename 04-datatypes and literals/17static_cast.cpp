#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n = 20;
    double nd = static_cast<double>(n); // converting int to double

    cout<<typeid(n).name()<<endl; // printing data type

    cout<<typeid(static_cast<double>(n)).name()<<endl; // typecasting

    cout<<typeid(nd).name(); // printing double type

    return 0;
}