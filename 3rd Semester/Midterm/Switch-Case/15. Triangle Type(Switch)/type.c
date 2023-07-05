#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter sides of triangle:");
    scanf("%d %d %d", &side1, &side2, &side3);

    switch (side1 == side2 && side2 == side3)
    {
    case 1:
        printf("The Given Triangle is equilateral\n");
        break;
    case 0:
        switch (side1 == side2 || side2 == side3 || side3 == side1)
        {
        case 1:
            printf("The given Triangle is isosceles\n");
            break;

        default:
            printf("The given Triangle is scalene\n");
            break;
        }
    }
    return 0;
}