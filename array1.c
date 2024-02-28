#include <stdio.h>

int main(void)
{
    int a[10];
    int even[10], odd[10]; // Arrays to store even and odd numbers
    int evenCount = 0, oddCount = 0;
    // Input phase
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    // Separating even and odd numbers
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[evenCount] = a[i];
            evenCount++;
        }
        else
        {
            odd[oddCount] = a[i];
            oddCount++;
        }
    }
    // Printing even numbers
    printf("Even elements: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Printing odd numbers
    printf("Odd elements: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}
