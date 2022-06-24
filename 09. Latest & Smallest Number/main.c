#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter one number:");
    scanf("%d", &a);

    printf("\nEnter another number:");
    scanf("%d", &b);
    if (a == b)
    {
        printf("%d is equal to %d", a, b);
    }
    else if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
        printf("%d is smaller than %d", b, a);
    }
    else
    {
        printf("%d is grater than %d\n", b, a);
        printf("%d is smaller than %d", a, b);
    }

    return 0;
}