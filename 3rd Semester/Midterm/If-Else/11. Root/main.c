#include <stdio.h>
int main()
{
    float a, b, c, x, result;
    printf("Enter the value of a:");
    scanf("%f", &a);
    printf("Enter the value of b:");
    scanf("%f", &b);
    printf("Enter the value of c:");
    scanf("%f", &c);
    printf("Enter the value of x:");
    scanf("%f", &x);
    result = sqrt(a * (pow(x, 2)) + b * x + c);
    printf("Result is: %.2f", result);
    return 0;
}