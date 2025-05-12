#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{

  fstream fs;
  fs.open("E:\\pendrive\\Language_Learning\\CPP-SOHAM_KADAM\\visual studio 2010 sk\\16-Operator_overloading\\test5.txt",ios::in);

  if(fs.is_open() == false)
  {
    cout << "Error opening write mode"<<endl;
    return 0;
  }

  cout << "Success opening"<<endl;

  string strLine;
  getline(fs,strLine);
  fs.close();
  
  return 0;
}