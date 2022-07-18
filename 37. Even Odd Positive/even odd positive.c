#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number \n\t");
    scanf("%d", &x);

    switch (x > 0)
    {
    case 1:
        switch (x % 2 == 0)
        {
        case 1:
            printf("The number is even-positive.\n");
            break;
        case 0:
            printf("The number is odd-positive.\n");
            break;
        }
        break;
    case 0:
        switch (x % 2 == 1)
        {
        case 1:
            printf("The number is even-negative.\n");
            break;
        case 0:
            printf("The number is odd-negative.\n");
            break;
        }
        break;
    }
    return 0;
}
