#include <stdio.h>
int main()
{
    int a, b, c, Item_Price;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &Item_Price);
    if (((a * 100) + (b * 10) + (c * 1)) == Item_Price)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}