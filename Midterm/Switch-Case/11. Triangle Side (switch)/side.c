//Take 3 sides of a triangle. Check if the triangle is valid or not.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle.\n");
    scanf("%d %d %d", &a, &b, &c);
    switch (a + b > c || b + c > a || a + c > b)
    {
    case 1:
        printf("The triangle is valid.\n");
        break;
    case 0:
        printf("The triangle is invalid.\n");
        break;
    }
    return 0;
}