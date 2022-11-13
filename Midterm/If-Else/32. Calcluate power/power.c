//Calculate the Power of a Number
#include <stdio.h>
int main()
{
    int a, b, power;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    power = a ^ b;
    printf("%d ^ %d = %d", a, b, power);
    return 0;
}