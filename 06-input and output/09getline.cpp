#include<iostream>
using namespace std;
int main(void)
{
    char str[100];  // define a character array with enough space for the input

    cout<<"enter your full name : ";
    cin.getline(str, 100);  // reads a line of text, up to 99 charecter (leaving space for null terminator)
    cout<<"you entered : "<< str<<endl;

    return 0;
}