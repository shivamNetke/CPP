// pointers

#include<bits/stdc++.h>
using namespace std;
void print()
{
	int var = 20;
	int *ptr;
	ptr = &var;
	
	cout<<"value at ptr = "<<ptr<<endl;
	cout<<"value at var = "<<var<<endl;
	cout<<"value at *ptr = "<<*ptr<<endl;
	
}

int main()
{
	print();
	return 0;
}