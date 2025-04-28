#include <bits/stdc++.h> 
using namespace std; 
  
enum year { 
    Jan, 
    Feb, 
    Mar, 
    Apr, 
    May, 
    Jun, 
    Jul, 
    Aug, 
    Sep, 
    Oct, 
    Nov, 
    Dec 
}; 
  
int main() 
{ 
    int i; 
  
    for (i = Jan; i <= Dec; i++) 
        cout << i << " "; 
  
    return 0; 
}

/*
--OUTPUT-- 
0 1 2 3 4 5 6 7 8 9 10 11
*/