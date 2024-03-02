#include <stdio.h>

int main(void) 
{
    int row_a, column_a, row_b, column_b;
    int i, j;
    char operation;

    /* Input for first matrix */
    printf("Enter the number of rows and columns of the first matrix (a) :\n");
    scanf("%d %d", &row_a, &column_a);

    /* Validate dimensions */
    if (row_a <= 0 || column_a <= 0) {
        printf("Invalid dimensions for matrix a.\n");
        return 1; /* Return 1 to indicate failure */
    }

    /* Input elements of first matrix */
    int a[row_a][column_a];
    printf("Enter elements of the first matrix (a):\n");
    for (i = 0; i < row_a; i++) {
        for (j = 0; j < column_a; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    /* Print the first matrix */
    printf("The first matrix (a) is:\n");
    for (i = 0; i < row_a; i++) {
        for (j = 0; j < column_a; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    /* Input for second matrix */
    printf("Enter the number of rows and columns of the second matrix (b):\n");
    scanf("%d %d", &row_b, &column_b);

    // Validate dimensions
    if (row_b <= 0 || column_b <= 0) {
        printf("Invalid dimensions for matrix b.\n");
        return 1; // Return 1 to indicate failure
    }

    // Input elements of second matrix
    int b[row_b][column_b];
    printf("Enter elements of the second matrix (b):\n");
    for (i = 0; i < row_b; i++) {
        for (j = 0; j < column_b; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    /* Print the second matrix */
    printf("The second matrix (b) is:\n");
    for (i = 0; i < row_b; i++) {
        for (j = 0; j < column_b; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    // Check if matrices a and b have the same dimensions
    if (row_a != row_b || column_a != column_b) {
        printf("Matrices a and b do not have the same dimensions. Addition/subtraction undefined.\n");
        return 1; // Return 1 to indicate failure
    }

    // Input operation
    printf("Please enter the operation (+ for addition, - for subtraction):\n");
    scanf(" %c", &operation); // Added space before %c to consume newline character

    // Compute result matrix c based on operation
    int c[row_a][column_a];
    if (operation == '+') {
        printf("The result of a + b is:\n");
        for (i = 0; i < row_a; i++) {
            for (j = 0; j < column_a; j++) {
                c[i][j] = a[i][j] + b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    } else if (operation == '-') {
        printf("The result of a - b is:\n");
        for (i = 0; i < row_a; i++) {
            for (j = 0; j < column_a; j++) {
                c[i][j] = a[i][j] - b[i][j];
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid operation. Please enter '+' for addition or '-' for subtraction.\n");
        return 1; // Return 1 to indicate failure
    }

    return 0;
}
