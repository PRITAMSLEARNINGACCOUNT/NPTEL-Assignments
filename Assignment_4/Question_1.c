#include <stdio.h>
#include <stdlib.h>
// int mean(int a)
// {

//     return Mean_Value;
// }
int main()
{
    int n = 0;
    float Mean_Value = 0;
    scanf("%d", &n);
    float *arr = (float *)malloc(n * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        Mean_Value += arr[i];
    }
    Mean_Value /= n;
    // printf("%.2f", Mean_Value);
    float Temp_Value = 0.0;
    int count = 0;
    float *ptr = (float *)malloc(1 * sizeof(float));

    for (int k = 0; k < n; k++)
    {
        if (arr[k] >= Mean_Value)
        {
            Temp_Value = arr[k];
            ptr[count++] = Temp_Value;
            ptr = realloc(ptr, (count + 1) * sizeof(float));
            // count++;-->  Produces Runtime Error
        }
    }
    int Final_Value = 0;
    for (int l = 0; l < count; l++)
    {
        Final_Value += ptr[l];
    }
    printf("%d", Final_Value);
    // printf("%d\n", count);
    // printf("%.2f\n", Mean_Value / n);
    free(ptr);
    free(arr);
    return 0;
}