//find nCr, nPr for given value of n & r
#include <stdio.h>
int main()
{
    int n, r, i, j, fact_n = 1, fact_r = 1, fact_n_r = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    for (i = 1; i <= n; i++)
    {
        fact_n = fact_n * i;
    }
    for (j = 1; j <= r; j++)
    {
        fact_r = fact_r * j;
    }
    for (i = 1; i <= (n - r); i++)
    {
        fact_n_r = fact_n_r * i;
    }
    printf("nCr = %d", fact_n / (fact_r * fact_n_r));
    printf("\nnPr = %d", fact_n / fact_r);
    return 0;
}