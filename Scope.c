#include <stdio.h>

int globalVar = 100; // global scope

// dispaly()
int main()
{
    int localVar = 10; // local scope
    printf("Local = %d\n, Global = %d\n", localVar, globalVar);
    return 0;
}