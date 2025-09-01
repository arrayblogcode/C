#include <stdio.h>

int add(int a, int b); // Declaration

int main()
{
    int result = add(5, 3); // Calling
    printf("Sum = %d\n", result);

    int result1 = add(10, 40); // Calling
    printf("Sum = %d\n", result1);
    return 0;
}

int add(int a, int b)
{ // Definition
    return a + b;
}
