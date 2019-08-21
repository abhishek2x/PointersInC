#include <stdio.h>

void A()
{
    printf("HELLO");
}

void B(void (*ptr)())  // Function pointer as argument.
{
    ptr(); // call back function that "ptr" points to
}

int main()
{
    B(A);  // A is a callback function.

    /*........OR
    void (*p)() = A;
    B(p);
    */
   
   return 0;
}