#include <stdio.h>
int main()
{
    /*
        a[0]=a1 a[1]=b1 a[2]=c1
        b[0]=a2 b[1]=b2 b[2]=c2
    */
    int a[3];
    int b[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < 3; j++)
    {
        scanf("%d", &b[j]);
    }
    int x[3];
    int y[3];
    for (int k = 0; k < 3; k++)
    {
        x[k] = a[k] * b[1];
    }
    for (int l = 0; l < 3; l++)
    {
        y[l] = b[l] * a[1];
    }
    int X = ((x[2] - (y[2])) + (x[1] - (y[1]))) / (x[0] - (y[0]));
    printf("%d ", X);
    int Y = a[2] - ((a[0] * X));
    printf("%d", Y / a[1]);
    return 0;
}