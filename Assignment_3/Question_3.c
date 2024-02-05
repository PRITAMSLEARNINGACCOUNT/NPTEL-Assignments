#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int K_Copy = 0;
int Odd_Even(int num)
{
    // printf("%d\n", num);
    if (num == 1)
    {
        K_Copy++;
        return num;
    }
    else if (num % 2 != 0)
    {
        K_Copy++;
        return num;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int temp = 0;
    int count = 0;
    int *ptr = (int *)malloc(1 * sizeof(int));
    int *ptr_2 = (int *)malloc(1 * sizeof(int));
    int temp_count = 0;
    int K = 0;
    scanf("%d", &K);
    while (true)
    {
        scanf("%d", &temp);
        if (temp == -1)
        {
            break;
        }
        ptr = realloc(ptr, (count + 1) * sizeof(int));
        ptr[count] = temp;
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        if (Odd_Even(ptr[i]) == 0)
        {
            continue;
        }
        else
        {
            ptr_2 = realloc(ptr, (K_Copy + 1) * sizeof(int));
            ptr_2[temp_count] = Odd_Even(ptr[i]);
            temp_count++;
        }
    }

    if (K_Copy < K)
    {
        printf("%d", -1);
    }
    else
    {
        // printf("%d\n", K_Copy);

        printf("%d ", ptr_2[K-1]);
    }

    free(ptr);
    free(ptr_2);
    return 0;
}