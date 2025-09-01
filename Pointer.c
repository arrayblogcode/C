#include <stdio.h>

int main()
{
    int a = 20;
    int *p = &a; // pointer to a

    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer p stores: %p\n", p);
    printf("Value at pointer p: %d\n", *p);

    return 0;
}

/*

int x = 10;

int *ptr; // Decleration fo pointer

ptr  = &x; Storing the addreessod x in pointer


*/