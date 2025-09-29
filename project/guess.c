#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int secertNumber, guess, attaempts = 0;

    srand(time(0));
    secertNumber = rand() % 100 + 1;

    printf("Welcoem to number guessing Game\n");
    printf("I have choosen a number between 1 to 100. Can you guess it.\n");
    printf("You have a maximum of 10  attempts \n");

    do
    {
        printf("Enter you guess number: ");
        scanf("%d", &guess);
        attaempts++;

        if (guess < secertNumber)
        {
            printf("Number is to Low\n");
        }
        else if (guess > secertNumber)
        {
            printf("Number is to high\n");
        }
        else
        {
            printf("Congrtas you guess the right number in %d attempts\n", attaempts);
        }

        if (attaempts == 10 && guess != secertNumber)
        {
            printf("Sorry you have used all 10 attpemts\n");
            printf("The secret number was: %d\n", secertNumber);
            break;
        }

    } while (guess != secertNumber);

    return 0;
}