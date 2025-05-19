#include<iostream>
using namespace std;

// function template
// generic function

template <typename t>
t add(t a, t b)
{
    return a + b;
}

int main(void)
{
    cout<<add(10, 20)<<endl;
    cout<<add(10.2f, 20.2f)<<endl;

    // for string
    cout<<add<string>("hello", " shivam")<<endl;
    return 0;
}

// --OUTPUT-- 
// 30
// 30.4
// hello shivam