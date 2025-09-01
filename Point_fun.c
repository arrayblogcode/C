#include <stdio.h>

void update(int *n)
{
    *n = *n + 10;
}

int main()
{
    int num = 5;
    update(&num);
    printf("Updated Value: %d\n", num);
    return 0;
}