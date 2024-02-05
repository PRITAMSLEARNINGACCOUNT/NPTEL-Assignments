#include <stdio.h>
#include <stdlib.h>
int Is_Prime(int A)
{
    for (int i = 2; i < A - 1; i++)
    {
        if (A % i == 0)
        {
            return 0;
        }
    }
    return A;
}
int main()
{
    int limit = 0;
    scanf("%d", &limit);
    int *ptr = (int *)malloc(limit * sizeof(int));
    for (int j = 0; j < limit; j++)
    {
        scanf("%d", &ptr[j]);
    }

    for (int i = 0; i < limit; i++)
    {
        if (ptr[i] == 1 || ptr[i] == 2)
        {
            printf("%d ", ptr[i]);
        }
        else if (Is_Prime(ptr[i]) == 0)
        {
            continue;
        }
        else
        {
            printf("%d ", Is_Prime(ptr[i]));
        }
    }

    return 0;
}