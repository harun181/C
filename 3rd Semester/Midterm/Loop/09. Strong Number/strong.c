// check a number is Strong number or not
#include <stdio.h>
int main()
{
    int n, i, sum = 0, j;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum = sum + j;
            }
        }
        if (sum == i)
        {
            printf("%d is a Strong number\n", i);
        }
        sum = 0;
    }
    return 0;
}