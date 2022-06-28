#include <stdio.h>
int main()
{
    float money, value;
    printf("Enter Money in USD:");
    scanf("%f", &money);
    value = (money + (money * 0.18));
    printf("USD with tax: %.2f", value);
    return 0;
}