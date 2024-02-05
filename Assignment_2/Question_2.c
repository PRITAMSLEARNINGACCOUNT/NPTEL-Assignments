#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int temp = 0, count = 0, count_2 = 0, count_3 = 0, count_4 = 0;
    int *ptr = (int *)malloc(1 * sizeof(int));
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
        if (ptr[i] == 1)
        {
            count_2 = i;
            break;
        }
    }
    for (int j = count - 1; j >= 0; j--)
    {
        if (ptr[j] == 1)
        {
            count_3 = j;
            break;
        }
    }
    for (int k = count_2 + 1; k < count_3; k++)
    {
        if (ptr[k] == 0)
        {
            count_4++;
        }
    }

    printf("%d", count_4);
    free(ptr);
    return 0;
}