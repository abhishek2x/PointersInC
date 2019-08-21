#include <stdio.h>
#include <stdlib.h>

int add(int* a, int *b)
{
    int c;
    c = *a + *b;
    return c;
}

int main()
{
    int x, y, z;
    x = 5;
    y = 5;
    z =add(&x, &y);
    printf("%d\n", z);
}