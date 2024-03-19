#include <stdio.h>

void printPath(int path[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (path[i] == 0)
        {
            printf("R"); // Right
        }
        else
        {
            printf("D"); // Down
        }
    }
}

void findPath(int A[][100], int n, int row, int col, int path[], int len)
{
    if (row == n - 1 && col == n - 1)
    {
        printPath(path, len);
        return;
    }

    if (col < n - 1 && A[row][col + 1] == 1)
    {
        path[len] = 0; // 0 represents right
        findPath(A, n, row, col + 1, path, len + 1);
    }

    if (row < n - 1 && A[row + 1][col] == 1)
    {
        path[len] = 1; // 1 represents down
        findPath(A, n, row + 1, col, path, len + 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int A[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int path[2 * n];
    findPath(A, n, 0, 0, path, 0);

    return 0;
}