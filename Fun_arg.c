//  Pass by value
#include <stdio.h>

void changeValue(int x)
{
    x = 100;
}

int main()
{
    int a = 10;
    changeValue(a);
    printf("Value of a = %d\n", a); // Still 10
    return 0;
}