// A C++ program to show that we use template and
// reference to find size of integer array parameter
#include <iostream>
using namespace std;

template <size_t n>
void findSize(int (&arr)[n])
{
	cout << sizeof(int) * n << endl;
}

int main()
{
	int a[10];
	cout << sizeof(a) << " ";
	findSize(a);
	return 0;
}
/*
--OUTPUT-- 
40 40
*/