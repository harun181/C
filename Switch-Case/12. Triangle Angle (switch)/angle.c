//Take 3 angles of a triangle. Check if the triangle is valid or not.
#include <stdio.h>

int main()
{
    int angle1, angle2, angle3, sum;
    printf("Enter three angles of triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    sum = angle1 + angle2 + angle3;

    switch (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
    case 1:
        printf("Triangle is valid.");
        break;
    case 0:
        printf("Triangle is not valid.");
        break;

    default:
        printf("Invalid Input.");
        break;
    }

    return 0;
}