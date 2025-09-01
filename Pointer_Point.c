#include <stdio.h>

int main()
{
    int x = 10;

    int *ptr = &x;     // pointer to int
    int **ptr2 = &ptr; // pointer to pointer

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);

    printf("Value stored in ptr (address of x) = %p\n", ptr);
    printf("Value stored in ptr2 (address of ptr) = %p\n", ptr2);

    printf("Value accessed using ptr = %d\n", *ptr);
    printf("Value accessed using ptr2 = %d\n", **ptr2);

    return 0;
}

/*

int  **ptr2;
*/