#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Create a pointer to integer
    int *p1;

    // Pointer to an array of 5 integers
    int(*p2)[5];

    // Points to 0th element of the arr
    p1 = arr;

    // Points to the whole array arr
    p2 = &arr;
  
      printf("p1 = %p\n", p1);
      printf("*p2 = %p\n\n", *p2);
  
      // incrementing both pointers
    p1++;
    p2++;
    printf("p1 = %p\n", p1);
      printf("*p2 = %p", *p2);

    return 0;
}
/*
--OUTPUT-- 
p1 = 0061FF04
*p2 = 0061FF04

p1 = 0061FF08
*p2 = 0061FF18
*/