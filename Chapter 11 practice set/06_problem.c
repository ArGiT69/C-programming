/*
Q. Attempt problem 4 using calloc()
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
    n = 10;
    ptr = (int *)calloc( n,  sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of ptr[%d]\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    return 0;
}


