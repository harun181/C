#include <stdio.h>
int main()
{
    int i, j, a;
    printf("\nEnter the value:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
    }
    return 0;
}