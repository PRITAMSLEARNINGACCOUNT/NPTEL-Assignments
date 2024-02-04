#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int temp = 0, count = 0, count_2 = 0;
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
            count_2++;
        }
    }
    if (count_2 % 2 == 0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }
    free(ptr);
    return 0;
}