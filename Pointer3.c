/*
malloc   -  void* malloc(size_t size)  // it does not initilizes the memory
calloc   -  void* calloc(size_t num, size_t size)   // it also initilizes the memory
realloc  -  void realloc(void* ptr, size__t size)
*/


#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int n;
        printf("Enter size of the array\n");
        scanf("%d\n", &n);
        int *A = (int*)malloc(n*sizeof(int));
        for (int i = 0; i < n; i++)
        {
            A[i] = i+1;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", A[i]);
        }
        return 0;
    }