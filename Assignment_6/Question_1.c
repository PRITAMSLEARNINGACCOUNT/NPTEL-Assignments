#include <stdio.h>
int n;

void computeSmoothing(int a[n][n], int l)
{
    int B[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int il = (i - l) > 0 ? (i - l) : 0;
            int ih = (i + l) < n ? (i + l) : (n - 1);
            int jl = (j - l) > 0 ? (j - l) : 0;
            int jh = (j + l) < n ? (j + l) : (n - 1);

            int sum = 0;
            for (int u = il; u <= ih; u++)
            {
                for (int v = jl; v <= jh; v++)
                {
                    sum += a[u][v];
                }
            }
            B[i][j] = sum;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", B[i][j]);
        }
        if (i != n - 1)
        {
            printf("\n");
        }
    }
}

int main()
{
    int l;
    scanf("%d", &n);
    scanf("%d", &l);

    int A[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    computeSmoothing(A, l);

    return 0;
}
