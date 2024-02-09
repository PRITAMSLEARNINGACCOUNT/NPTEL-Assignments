#include <stdio.h>
#include <stdlib.h>
int main()
{
    int smallest = 0, n = 0, Match = 0, count = 0;
    scanf("%d", &n);
    int *First_Array = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &First_Array[i]);
    }
    int m = 0;
    scanf("%d", &m);
    int *Second_Array = (int *)malloc(m * sizeof(int));
    for (int p = 0; p < m; p++)
    {
        scanf("%d", &Second_Array[p]);
    }

    int *Common_Array = (int *)malloc(1 * sizeof(int));
    // if (m > n)
    // {
    for (int l = 0; l < n; l++)
    {
        for (int inner = 0; inner < m; inner++)
        {
            if (First_Array[l] == Second_Array[inner])
            {
                Common_Array[count++] = First_Array[l];
                Common_Array = realloc(Common_Array, (count + 1) * sizeof(float));
            }
        }
    }
    // }
    // else
    // {
    //     for (int la = 0; la < n; la++)
    //     {
    //         for (int Inner = 0; Inner < m; Inner++)
    //         {
    //             if (First_Array[la] == Second_Array[Inner])
    //             {
    //                 Common_Array[count++] = First_Array[la];
    //                 Common_Array = realloc(Common_Array, (count + 1) * sizeof(float));
    //             }
    //         }
    //     }
    // }
    smallest = Common_Array[0];
    for (int k = 1; k < count; k++)
    {
        if (smallest > Common_Array[k])
        {
            smallest = Common_Array[k];
        }
    }
    if (count == 0)
    {
        printf("%d", -1);
    }
    else
    {

        printf("%d", smallest);
    }

    // for (int k = 1; k < n; k++)
    // {
    //     if (smallest > First_Array[k])
    //     {
    //         smallest = First_Array[k];
    //     }
    // }
    // for (int q = 0; q < m; q++)
    // {
    //     if (smallest == Second_Array[q])
    //     {
    //         Match++;
    //     }
    // }
    // if (Match > 0)
    // {
    //     printf("%d", smallest);
    // }
    // else
    // {
    //     printf("%d", -1);
    // }
    free(Common_Array);
    free(First_Array);
    free(Second_Array);
    return 0;
}