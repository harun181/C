#include<stdio.h>
#include<math.h>
int main()
{
    const float pi = 3.1416;
    float radius, circumference, area;
    //Take Radius Input
    printf("Enter the Radius:");
    scanf("%f", &radius);

    //Calcluate Circumference
    circumference = 2 * pi * radius;
    printf("\nCircumference  is: %.2f", circumference);


    //Calcluate Area
    area = pi * radius * radius;
    printf("\nArea is: %.2f", area);


    return 0;

}
