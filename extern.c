#include <stdio.h>

int x = 10; // global variable

void display()
{
    extern int x; // declaration
    printf("x = %d\n", x);
}

int main()
{
    display();
    return 0;
}