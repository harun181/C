#include <stdio.h>
int main()
{
    float x1, x2, y1, y2, result;
    printf("Enter the value of x1:");
    scanf("%f", &x1);
    printf("Enter the value of x2:");
    scanf("%f", &x2);
    printf("Enter the value of y1:");
    scanf("%f", &y1);
    printf("Enter the value of y2:");
    scanf("%f", &y2);
    result = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("Result is: %.2f", result);
    return 0;
}