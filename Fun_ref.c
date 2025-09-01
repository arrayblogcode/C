// Pass by refrence
#include <stdio.h>

void changeValue(int *x)
{
    *x = 100;
}

int main()
{
    int a = 10;
    changeValue(&a);
    printf("Value of a = %d\n", a); // Now 100
    return 0;
}