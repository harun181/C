#include<stdio.h>
#include<math.h>
int main()
{
    float base, height, area;
    printf("Enter the Base:");
    scanf("%f", &base);
    printf("\nEnter the Height:");
    scanf("%f", &height);
    area = 0.5*base*height;
    printf("Area is: %.2f", area);


    return 0;

}

