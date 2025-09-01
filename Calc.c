#include <stdio.h>

int main()
{
    char op;
    int a, b;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (op)
    {
    case '+':
        printf("Result = %d\n", a + b);
        break;
    case '-':
        printf("Result = %d\n", a - b);
        break;
    case '*':
        printf("Result = %d\n", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result = %d\n", a / b);
        else
            printf("Division by zero not allowed!\n");
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}