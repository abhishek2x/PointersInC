#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int* p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("%d\n", p);
    free(p);
    printf("%d\n", p);
    p = (int*)malloc(20*sizeof(int));
    printf("%d\n", p);
}