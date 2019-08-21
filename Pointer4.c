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

        int *B = (int*)realloc(A, 2*n*sizeof(int));
        printf("Previous block address= %d, New Address = %d", A,B);
        for(int i = 0; i < 2*n; i++)
        {
            printf("%d ", B[i]);
        }
        return 0;
    }