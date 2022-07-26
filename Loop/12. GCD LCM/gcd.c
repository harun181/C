// GCD of two Numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    printf("GCD of %d and %d is %d", a, b, b);
    return 0;
}
