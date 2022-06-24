#include<stdio.h>
#include<math.h>
int main()
{
    float deg, far;

    printf("Enter today's temparature in Degree:");
    scanf("%f", &deg);

    far = (1.8 * deg) + 32;

    printf("Temparature in Farenheight: %.2f", far);
    return 0;
}
