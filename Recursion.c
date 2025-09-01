#include <stdio.h>

// Function Declaration
int factorial(int n);

// Main Function
int main()
{
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function Call and Output
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}

// Function Definition
int factorial(int n)
{
    if (n == 0)
    {
        return 1; // Base case
    }
    else
    {
        return n * factorial(n - 1); // Recursive case
    }
}