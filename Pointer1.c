#include <stdio.h>

void increment( int *p)
{
    *p = *p + 1;
}

int main()
{
    int a = 10;
    int* c = &a;
    increment(c);
    printf("%d", a);
}
