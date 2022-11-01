// c program to know the sum of series 1^2 + 2^2 + …. + n^2.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i * i;
    }
    printf("Sum of 1^2+2^2+...+%d^2 is %d", n, sum);
    return 0;
}