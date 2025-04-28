#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1("Hello");
    string s2(" World");

    for (auto i : s2)
        s1 += i;

    cout << s1;
    return 0;
}