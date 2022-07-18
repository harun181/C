#include<stdio.h>
int main()
{
    int x, y;
mistake:
    printf("Enter two Number: ");
    scanf("%d %d", &x, &y);

    switch(x>y)
    {
    case 1:
        printf("%d is Maximum.", x);
        break;
    case 0:
        printf("%d is Maximum.", y);
        break;
    default:
        printf("Invalid Input");
        goto mistake;
    }
    return 0;
}
