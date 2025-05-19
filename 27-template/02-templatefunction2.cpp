#include<iostream>
using namespace std;

template <typename t1, typename t2>
void print(t1 strMsg, t2 a)
{
    cout<<strMsg<<" "<<a<<endl;

}

int main(void)
{
    print("hello", 3);
    print("hello ", "shivam");
    print(44, " hello");

    return 0;
}

// --OUTPUT-- 
// hello 3
// hello  shivam
// 44  hello