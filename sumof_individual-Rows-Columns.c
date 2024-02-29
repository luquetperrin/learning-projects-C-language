#include <stdio.h>

/**
 * print the sum of individual rows and columns of a matrix (3x3).
 * @i: The number of rows
 * @j: The number of columns
 * @a: the array holding a 3x3 matrix
 * 
 * Return: 0
*/
int main(void)
{
    int a[3][3];
    int i, j;
    int sumRows, sumColumns;
    
    printf("Enter elements of the matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of individual rows and columns: \n");
    for (i = 0; i < 3; i++)
    {
        sumRows = sumColumns = 0;
        for (j = 0; j < 3; j++)
        {
            sumRows += a[i][j];
            sumColumns += a[j][i];
        }
        printf("%d\t%d\n", sumRows, sumColumns);
    }
    return (0);
}