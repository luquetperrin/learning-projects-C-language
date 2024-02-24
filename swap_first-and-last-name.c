#include <stdio.h>
#include <string.h>

int main(void)
{
    /*Read the total number of name*/
    int namesNum;
    printf("Enter the total number of names:\n");
    scanf("%d", &namesNum);

    /*Process each index card*/
    char first_name[101];
    char last_name[101];

    for (int i = 0; i < namesNum; i++)
    {
        scanf("%s %s", first_name, last_name);

        /*Display the reversed name*/
        printf("%s %s\n", last_name, first_name);
    }
    return (0);
}