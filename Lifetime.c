#include <stdio.h>

void demo()
{
    static int count = 0; // static variable
    count++;
    printf("Count = %d\n", count);
}

int main()
{
    demo();
    demo();
    demo();
    return 0;
}