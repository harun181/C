#include <stdio.h>
int main()
{
    float bdt, usd;
    printf("Enter Salary in BDT:");
    scanf("%f", &bdt);
    usd = bdt / 92.98;
    printf("Salary in USD: %.2f", usd);
    return 0;
}
