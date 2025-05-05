#include <iostream>
using namespace std;

class Demo
{
public:
	int no;

	// default constructor
	Demo(){
		cout<<"in default Demo() constructor"<<endl;
		no = 0;
		cout<<"out default Demo() constructor"<<endl;
	}

	// parameterized constructor
	Demo(int x)
	{
		cout<<"in parameterized constructor"<<endl;
		no = x;
		cout<<"out parameterized constructor"<<endl;
	}

	// a + b 
	// '+' is a binary operator
	// binary '+' operator overloading

	Demo operator + (Demo &referenceObject)
	{
		cout<<"in '+' overloaded operator"<<endl;
		Demo tempObj;
		tempObj.no = no + referenceObject.no;
		cout<<"out '+' overloaded operator"<<endl;
		return tempObj;
	}
};

int main(void)
{
	cout<<"in main"<<endl;
	Demo d1(10);
	Demo d2(20);
	Demo d3 = d1 + d2;
	// if we didnt create a function for '+' operator and we did this :  Demo d3 = d1 + d2;
	// we get the error : Demo' is not derived from 'std::__cxx11::basic_string<_CharT, _Traits, _Alloc>'
	cout<<"d3 no = "<<d3.no<<endl;
	cout<<"out main"<<endl;
	return 0;
}

/*
--OUTPUT-- 
in main
in parameterized constructor
out parameterized constructor
in parameterized constructor
out parameterized constructor
in '+' overloaded operator
in default Demo() constructor
out default Demo() constructor
out '+' overloaded operator
d3 no = 30
out main
*/