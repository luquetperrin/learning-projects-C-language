#include <stdio.h>

/* Program to print the original matrix and its transpose */

int main(void)
{
    int a[2][3]; // Declare a 2x3 matrix
    int i, j;    // Declare variables for loop counters

    // Input phase: Read values into the matrix
    printf("Enter elements of the matrix (2x3):\n");
    for (i = 0; i < 2; i++) // Loop through rows
    {
        for (j = 0; j < 3; j++) // Loop through columns
        {
            scanf("%d", &a[i][j]); // Read a value into each element of the matrix
        }
    }

    // Output phase: Print the original matrix
    printf("Original Matrix (2x3):\n");
    for (i = 0; i < 2; i++) // Loop through rows
    {
        for (j = 0; j < 3; j++) // Loop through columns
        {
            printf("%d ", a[i][j]); // Print each element of the original matrix
        }
        printf("\n"); // Move to the next row after printing all elements in a row
    }

    printf("\n"); // Add a newline for clarity

    // Output phase: Print the transpose of the matrix
    printf("Transpose of the Matrix (3x2):\n");
    for (i = 0; i < 3; i++) // Loop through columns of transpose
    {
        for (j = 0; j < 2; j++) // Loop through rows of transpose
        {
            printf("%d ", a[j][i]); // Print each element of the transpose matrix
        }
        printf("\n"); // Move to the next row after printing all elements in a column
    }

    return (0); // Indicate successful completion of the program
}

