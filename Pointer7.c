// Function Pointers

#include <stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int (*p)(int, int); // declation of function pointers
    p = &add; // initialisation of function pointers  (or p = add)
    int c = (*p)(2,3); // or int c = p(2,3)
    printf("%d", c);
}