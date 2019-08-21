#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a,const void* b)
{
    int A = *((int*)a);  // Type casting to int* and getting value
    int B = *((int*)b);
    return abs(A) - abs(B); 
}

int main()
{
    int A[] = {3,4,-4,52,5,-5,325,-2353,-52,523};
    qsort(A, 10, sizeof(int), compare);
    for (int i = 0; i < 10; i++)
        printf("%d  ", A[i]);
    return 0;
}