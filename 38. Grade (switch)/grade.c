#include <stdio.h>
int main()

{
    int x;
    printf("Enter mark\n");
    scanf("%d", &x);
    switch (x / 10)
    {
    case 10:
    case 9:
    case 8:
        printf("A+\n");
        break;
    case 7:
        printf("A\n");
        break;
    case 6:
        printf("A-\n");
        break;
    case 5:
        printf("B\n");
        break;
    case 4:
        printf("C\n");
        break;
    default:
    {
        switch (x >= 33 && x < 40)
        {
        case 1:
            printf("D\n");
            break;
        case 0:
            switch (x < 33 && x >= 0)
            {
            case 1:
                printf("F\n");
                break;
            case 0:
                printf("Invalid Mark\n");
                break;
            }
        }
    }
    break;
    }
    return 0;
}