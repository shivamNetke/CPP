#include<bits/stdc++.h>
using namespace std;

class GfG
{
    public:  // access specifier
        string name; // data member
    
    void printname() // member function
    {
        cout<<name;

    }
};

int main(void)
{
    GfG g;  // declare an object of class class geeks

    g.name = "GeeksForGeeks"; // accessing data member

    g.printname(); // accessing member function

    return 0;
}