#include<stdio.h>
int main()
{
    int x, y, z;
mistake:
    printf("Enter three Number: ");
    scanf("%d %d %d", &x, &y, &z);

    switch(x<y && x<z)
    {
    case 1:
        printf("%d is minimum.", x);
        break;
    case 0:
        switch(y<x && y<z)
        {
        case 1:
            printf("%d is minimum", y);
            break;
        case 0:
            printf("%d is minimum.", z);
            break;
        }
    }

    return 0;
}

