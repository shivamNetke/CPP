#include<iostream>
using namespace std;

int main(void)
{
    int n = 4;

    if(n % 2 == 0)
    {
        //skippint to label1
        goto label1;
    }
    else{
        //skipping to label2
        goto label2;
    }

    label1:
        cout<<"even"<<endl;
        return 0;

    label2:
        cout<<"odd"<<endl;
        return 0;

    label3:
        cout<<"unspecified";
        return 0;
}