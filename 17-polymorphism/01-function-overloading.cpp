#include<iostream>
using namespace std;

class math{
    public:
    int add (int a, int b){
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main(void)
{
    math m;
    cout<< m.add(2, 3)<<endl;    // call int version
    cout<< m.add(2.5, 3.1)<<endl; // call double version

    return 0;
}