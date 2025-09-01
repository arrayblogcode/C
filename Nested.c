#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is the largest\n");
        }
        else
        {
            printf("C is the largest\n");
        }
    }
    else
    {
        if (b > c)
        {
            printf("B is the largest\n");
        }
        else
        {
            printf("C is the largest\n");
        }
    }

    return 0;
}