#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("arr[0] = %d\n", arr[0]);         // 10
    printf("*(arr + 1) = %d\n", *(arr + 1)); // 20
    printf("ptr[2] = %d\n", ptr[2]);         // 30

    return 0;
}

/*
intr arr[3] ={1,2,4};

printf("Address of arr[0]: %p\n", &arr[0]);
printf("Value of arr: %p\n", arr);

this means arr is equivalent to &arr[0]

*/