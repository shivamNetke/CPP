#include<iostream>
using namespace std;

int main(void)
{
    int i = 0;

    // outer loop to print each row
    do{
        int j = 0;

        // inner loop to print each charecter in each row

        do{
            cout<<"* ";
            j++;
        }while(j < 4);
        cout<<endl;
        i++;
    }while(i < 4);
    return 0;
}