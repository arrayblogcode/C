#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            break; // exit the loop when i = 5
        }
        printf("%d\n", i);
    }
    return 0;
}