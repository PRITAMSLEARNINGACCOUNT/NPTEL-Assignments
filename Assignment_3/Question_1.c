#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
float Average(float a, float b)
{
    // printf("%.1f", a);
    // printf("%.1f", b);
    float Value;
    Value = (a + b) / 2.0;
    return Value;
}
int main()
{
    float temp = 0;
    int count = 0;
    float *ptr = (float *)malloc(1 * sizeof(float));
    while (true)
    {
        scanf("%f", &temp);
        if (temp == -1)
        {
            break;
        }
        ptr = realloc(ptr, (count + 1) * sizeof(float));
        ptr[count] = temp;
        count++;
    }

    for (int i = 0; i < count - 1; i++)
    {
        if (i == (count - 1) - 1)
        {
            printf("%.1f", Average(ptr[i], ptr[i + 1]));
        }
        else
        {
            printf("%.1f ", Average(ptr[i], ptr[i + 1]));
        }
    }
    free(ptr);
    return 0;
}