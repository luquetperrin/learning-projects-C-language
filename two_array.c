#include <stdio.h>

int main(void) 
{
    // Declare a 2D array 'a' with 2 rows and 3 columns
    int a[2][3];
    int sum = 0; // Variable to store the sum of all elements
    // Input phase: Read elements into the array 'a'
    for (int i = 0; i < 2; i++) // Loop through each row
    {
        for (int j = 0; j < 3; j++) // Loop through each column
        {
            scanf("%d", &a[i][j]); // Read an integer and store it in 'a[i][j]'
        }
    }
    // Output phase: Print the elements of the array 'a' and calculate the sum
    for (int i = 0; i < 2; i++) // Loop through each row
    {
        for (int j = 0; j < 3; j++) // Loop through each column
        {
            printf("%d\t", a[i][j]); // Print the element at 'a[i][j]' followed by a tab
            sum += a[i][j]; // Add the element to 'sum'
        }
        printf("\n"); // Move to the next line after printing all elements of a row
    }
    // Print the sum of all elements in the array 'a'
    printf("Sum = %d\n", sum);
    return (0); // Indicate successful program execution
}

