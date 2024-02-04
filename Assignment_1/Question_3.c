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

    int X = (x[2] - (y[2])) / ((x[0] - (y[0])) + (x[1] - (y[1])));
    printf("%d ", X);
    for (int m = 0; m < 3; m++)
    {
        x[m] = a[m] * b[1];
    }
    for (int n = 0; n < 3; n++)
    {
        y[n] = b[n];
        // printf("%d\n", y[n]);
    }
    // printf("%d\n", y[2]);
    // printf("Hello Fucking World");
    int Yval;
    int Y_val;
    int Final_Yval;
    Yval = (x[0] + y[0]) + (x[1] + y[1]);
    Y_val = (x[2] + y[2]);
    // printf("%d",Yval);
    // printf("%d",Y_val);
    Final_Yval = Y_val / Yval;
    printf("%d", Final_Yval);
    // printf("%d %d %d\n", x[0], x[1], x[2]);
    // printf("%d %d %d\n", y[0], y[1], y[2]);
    // printf("%d %d %d\n", -(y[0]), -(y[1]), -(y[2]));
    // printf("%d\n", Yval);

    return 0;
}