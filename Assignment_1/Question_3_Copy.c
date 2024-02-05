#include <stdio.h>

int main()
{
    /*
        a1x+b1y+c1
        2x + 3y=  7

        a2x+b2y+c2
        4x − 2y=  6


    */

    int a1x, a2x, b1y, b2y, c1, c2, x, y, A, C, B;

    scanf("%d", &a1x);
    scanf("%d", &b1y);
    scanf("%d", &c1);
    scanf("%d", &a2x);
    scanf("%d", &b2y);
    scanf("%d", &c2);

    c1 = (-1 * c1);
    c2 = (-1 * c2);
    A = a1x;
    C = c1;
    B = b1y;

    a1x *= a2x;
    b1y *= a2x;
    c1 *= a2x;
    a2x *= A;
    b2y *= A;
    c2 *= A;

    y = (c1 - c2) / (b1y - b2y);
    y = (-1 * y);
    x = (-1 * (C + (B * y))) / A;

    printf("%d", y);
    printf("%d ", x);

    return 0;
}