#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("First value: %d\n", *p); // 10

    p++;
    printf("Second value: %d\n", *p); // 20

    p = p + 2;
    printf("Fourth value: %d\n", *p); // 40

    p--;
    printf("Third value again: %d\n", *p); // 30

    return 0;
}

/*
int arr[3] = {10, 20,40}
int *ptr = arr;  // points  to arr[0]


*/