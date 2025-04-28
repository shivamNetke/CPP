#include <iostream> 
using namespace std; 
  
union geek { 
    int age; 
    float GPA; 
    double marks; 
}; 
  
int main() 
{ 
  
    geek student1; 
  
    cout << "Memory address of age: " << &student1.age  << endl; 
    cout << "Memory address of GPA: " << &student1.GPA << endl;
    cout << "Memory address of marks: " << &student1.marks << endl; 
  
    cout << "Size of a union: " << sizeof(student1) << endl; 
  
    return 0; 
}

/*

--OUTPUT-- 
Memory address of age: 0x61ff08
Memory address of GPA: 0x61ff08
Memory address of marks: 0x61ff08
Size of a union: 8
*/