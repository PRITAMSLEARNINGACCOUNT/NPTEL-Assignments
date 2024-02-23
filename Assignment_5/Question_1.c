#include <stdio.h>
#include <stdbool.h>
int c = 0;
int blocksum(int a);

int main()
{

    int num;
    scanf("%d", &num);
    printf("%d", blocksum(num));

    return 0;
}
int blocksum(int a)
{

    if (a == 1)
    {
        return c;
    }
    else
    {
        if (a % 2 != 0)
        {
            a = ((3 * a) + 1);
            c++;
            // printf("%d\t", c);
            return blocksum(a);
        }
        else
        {
            a = (a / 2);
            c++;
            // printf("%d\t", c);
            return blocksum(a);
        }
    }
}