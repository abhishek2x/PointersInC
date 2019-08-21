#include <stdio.h>
#include <stdlib.h>

int* add(int* x, int *y)
{
    int z = (*x) + (*y);
    return &z;
}

int main()
{
    int a,b;
    a = 5;
    b = 5;
    int* c = add(&a, &b);
    printf("%d", *c);
    return 0;
}