#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure
typedef struct
{
    int id;
    char name[50];
    int age;
} Records;

// insert function
void insertRecords(const char *filename)
{
    FILE *fp = fopen(filename, "ab");
    if (!fp)
    {
        perror("Eroor Opening file");
        return;
    }

    Records rec;
    printf("Enter you id: ");
    scanf("%d", &rec.id);

    printf("Enter you Name: ");
    scanf("%s", &rec.name);

    printf("Enter you Age: ");
    scanf("%d", &rec.age);

    fwrite(&rec, sizeof(Records), 1, fp);
    fclose(fp);
    printf("Record inserted Successfully");
}

// read the data from the file
void selectRecords(const char *filename)
{
    FILE *fp = fopen(filename, "rb");

    Records rec;
    printf("\n Student Record: \n ------------------ \n");

    while (fread(&rec, sizeof(Records), 1, fp))
    {
        printf("Id: %d | Name: %s | Age: %d/n", rec.id, rec.name, rec.age);
    }
    printf("_---------------------\n");

    fclose(fp);
}

int main()
{
    const char *filename = "database.bin";
    int choice;

    while (1)
    {
        printf("/nMini  Database\n");
        printf("1. Insert\n2. Select\n3. Exit\n Enter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertRecords(filename);
            break;
        case 2:
            selectRecords(filename);
            break;
        case 3:
            printf("Exiting... \n");
            exit(0);
        default:
            printf("Invalid choice \n");
            break;
        }
    }

    return 0;
}