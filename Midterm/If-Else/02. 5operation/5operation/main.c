#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, sum, subs, multi, modulu;
    float division;

    printf("Enter one Number:");
    scanf("%d", &a);

    printf("\nEnter another Number:");
    scanf("%d", &b);

    sum = a + b;
    subs = a - b;
    multi = a * b;
    modulu = a % b;
    division = (float) a /(float) b;

    printf("Sum: %d.\nSubstraction: %d. \nMultiplication: %d. \nModulus:%d. \nDivision: %.2f", sum, subs, multi, modulu, division);
    return 0;

}
