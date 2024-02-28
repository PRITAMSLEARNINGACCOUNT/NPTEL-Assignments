#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
char *String;
int count;
int row;
int column;
int Side(int Array[row][column], int index_1, int index_2)
{

    for (int i = index_1; i < row; i++)
    {
        for (int j = index_2; j < column; j++)
        {
            if (Array[i][j] == 1)
            {
                printf("%d\n", Array[i][j]);
            }
        }
    }
}
int Down(int Array[row][column], int index_1, int index_2)
{
}
int main()
{
    // int column = 0, row = 0;
    printf("Enter The Number Of Columns???\n");
    scanf("%d", &column);
    printf("Enter The Number Of Rows???\n");
    scanf("%d", &row);
    int Matrix[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &Matrix[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (Matrix[i][j] == 1)
            {
                Side(Matrix, i, j);
                break;
            }

            // printf("%d ", Matrix[i][j]);
        }
        // printf("\n");
    }

    return 0;
}