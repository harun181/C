#include<stdio.h>
int main()
{

    int a;
    float b;
    char c;
    double d;

    printf("Enter a Integer Number: ");
    scanf("%d", &a);
    printf("\nEnter a Float Number: ");
    scanf("%f", &b);
    printf("\nEnter a Charector: ");
    scanf(" %c", &c);
    printf("\nEnter a Double Number: ");
    scanf("%lf", &d);

    printf("\n Your Entered Integer Number is %d. Float Number is %.2f. Double Number is %lf. And Charector is %c.", a, b, d, c);

}
