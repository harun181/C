/* Take a number from user. Print if the number is
positive/negative/zero. */
#include<stdio.h>
int main()
{
    int x;
mistake:
    printf("Enter the Number: ");
    scanf("%d", &x);

    switch(x>0)
    {
    case 1:
        printf("%d is Positive.", x);
        break;
    case 0:
        switch(x<0)
        {
        case 1:
            printf("%d is Negative", x);
            break;
        case 0:
            printf("%d is Zero.", x);
            break;
        default:
            printf("Invalid Input");
            goto mistake;
        }


    }

    return 0;
}
