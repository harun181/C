//LCM of two numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a * b / (a % b);
    printf("LCM of %d and %d is %d", a, b, c);
    return 0;
}