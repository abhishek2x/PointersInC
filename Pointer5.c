#include <stdio.h>

int compare(int a, int b)
{
    if(a>b)
    return 1;
    else 
    return -1;
}

void BubbleSort(int A[], int n, int (*compare)(int, int)) // (*compare)(int, int) -- Function Pointer.
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(compare(A[j], A[j+1]) > 0)
            {
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }   
    }
}
int main()
{
    int  A[] = {4,6,3,5,6,643,34,6,0};
    BubbleSort(A, 9, compare);
    for (int i = 0; i < 9; i++)
    {
        printf("%d  ", A[i]);
    }
    return 0;
}
