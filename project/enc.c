#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char *text, int shift)
{
    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = text[i];
        if (isalpha(c))
        {
            char base = isupper(c) ? 'A' : 'a';
            text[i] = (c - base + shift) % 26 + base;
        }
    }
}

void decrypt(char *text, int shift)
{
    encrypt(text, 26 - shift);
}

int main()
{
    char text[100];
    int shift, choice;

    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = 0;

    printf("Enter Shift amount: ");
    scanf("%d", &shift);

    printf("Choose:1 - > encrypt, 2->decrypt: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        encrypt(text, shift);
        printf("Encrypted text : %s\n", text);
    }
    else if (choice == 2)
    {
        decrypt(text, shift);
        printf("Decrypted text : %s\n", text);
    }
    else
    {
        printf("Invalide Choice\n");
    }
    return 0;
}