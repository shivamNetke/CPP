#include<iostream>
using namespace std;

void print(int i) {   // overload print functions
    cout<<"integer = "<<i<<endl;    
}

void print(double d ){
    cout<<"double = "<<d<<endl;
}

void print(const char *s){
    cout<<"string : "<<s<<endl;
}

int main()
{
    print(5);
    print(3.14);
    print("hello shivam");

    return 0;
}