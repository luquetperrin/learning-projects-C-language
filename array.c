#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr1[5], arr2[5], sumArry[5], i;
    /*Read elements of the first array*/
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d element of the arr1\n", i+1);
        scanf("%d", &arr1[i]);
    }
    /*Reading ellments of the second array*/
    for (i = 0; i < 5; i++)
    {
        printf("Enter the %d element of the arr2\n", i+1);
        scanf("%d", &arr2[i]);
    }
    /*Computing the sum of the two arrays*/
    for (int i = 0; i < 5; i++)
    {
        sumArry[i] = arr1[i] + arr2[i];
        printf("Sum of array element at index %d is = %d\n", i, sumArry[i]);
    }
    return (0);
} 