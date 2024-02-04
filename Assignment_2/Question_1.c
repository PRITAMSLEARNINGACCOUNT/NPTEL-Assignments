#include <stdio.h>
int main()
{
    int num, i, origin, reminder = 0, count = 0;
    scanf("%d", &num);
    origin = num;
    while (origin != 0)
    {
        if (reminder == -1)
        {
            break;
        }
        reminder = origin % 10;
        if (reminder == 1)
        {
            count++;
        }
        origin /= 10;
    }

    if (count % 2 == 0)
    {
        printf("%d", 1);
    }
    else
    {
        printf("%d", 0);
    }

    return 0;
}