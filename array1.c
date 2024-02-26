#include <stdio.h>

int main(void)
{
    int a[10];
    int even = 0;
    int odd = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d of the array named 'a'\n", i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("even elemnts are: %d\n", even);
    printf("odd elements are: %d\n", odd);
    return (0);
}