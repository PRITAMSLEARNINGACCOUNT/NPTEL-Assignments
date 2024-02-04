#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int largest = 0;
    int largest_2 = 0;
    if (a > b)
    {
        largest_2 = b;
        largest = a;
    }
    else
    {
        largest_2 = a;
        largest = b;
    }
    if (largest < c)
    {
        largest_2 = largest;
        largest = c;
    }
    else
    {
        if (largest_2 < c)
        {
            largest_2 = c;
        }
    }
    printf("%d", largest_2);
    return 0;
}