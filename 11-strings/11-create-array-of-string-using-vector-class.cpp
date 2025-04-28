
#include <array>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    array<string, 4> colour{ "Blue", "Red", "Orange",
                             "Yellow" };

    for (int i = 0; i < 4; i++)
        cout << colour[i] <<endl;

    return 0;
}