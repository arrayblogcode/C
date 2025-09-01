#include <stdio.h>

int main()
{
    int choice;
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You selected Pizza\n");
        break;
    case 2:
        printf("You selected Burger\n");
        break;
    case 3:
        printf("You selected Pasta\n");
        break;
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}