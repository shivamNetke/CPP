#include<stdio.h>
int main(void)
{
    int a = 1, b = 2, c = 11;

    // finding the largest by comparing using relational operators with if else

    if(a >= b)
    {
        if(a >= b)
        {
            printf("%d", a);
        }
        else{
            printf("%d", c);    
        }
    }
    else{
        if(b >= c)
        {
            printf("%d", b);
        }
        else{
            printf("%d", c);
        }
    }

    return 0;
}