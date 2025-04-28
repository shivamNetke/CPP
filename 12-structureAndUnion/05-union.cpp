
#include <iostream> 
using namespace std; 
  
union geek { 
    int age; 
    char grade; 
    float GPA; 
}; 
  
int main() 
{ 
  
    union geek student1; 
  
    student1.age = 25; 
    cout << "Age : " << student1.age << endl; 
  
    student1.grade = 'B'; 
    cout << "Grade : " << student1.grade << endl; 
  
    student1.GPA = 4.5; 
    cout << "GPA : " << student1.GPA << endl; 
  
    return 0; 
}