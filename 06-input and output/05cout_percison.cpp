#include <iostream>
using namespace std;

int main(void)
{
    double num = 123.4567889;

    cout.precision(4);  // Sets the precision to 4 significant digits
    cout << num << endl;  // Output: 123.5

    return 0;
}
