#include<iostream>
#define MAX 1              
#define SQUARE(x) ((x) * (x))  

using namespace std;

int main(void)
{
    double area = MAX * 5 * 5;
    cout << "area = " << area << endl;

    cout << "square of 5 = " << SQUARE(5) << endl;
    return 0;
}
