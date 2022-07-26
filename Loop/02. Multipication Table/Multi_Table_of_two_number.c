// multiplication table between two given numbers
#include <stdio.h>
int main()
{
    int n, m, i, j;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("Enter the number\n");
    scanf("%d", &m);
    for (i = n; i <= m; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d*%d=%d\n", i, j, i * j);
        }
    }
    return 0;
}