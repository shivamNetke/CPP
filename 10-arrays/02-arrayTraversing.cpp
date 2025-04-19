#include<iostream>
using namespace std;
int main(void)
{
    // initializing the array
    int table_of_two[10] = {2, 4, 6, 8,  10, 12, 14, 16, 18, 20};

    // traverse the array using for loop
    for (int i = 0; i < 10; i++)
    {
        cout<<table_of_two[i]<<" ";
    }
    return 0;
}

/*
--OUTPUT-- 
2 4 6 8 10 12 14 16 18 20 
*/