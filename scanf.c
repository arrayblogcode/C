#include <stdio.h>

int main()
{
    int age;
    float salary;

    printf("Enter your age: ");
    scanf("%d", &age); // & means address of variable

    printf("Enter your salary: ");
    scanf("%f", &salary);

    printf("\nYou entered Age = %d and Salary = %.2f\n", age, salary);

    return 0;
}

/*
\n new line
\t tabspace
\" double quote





*/