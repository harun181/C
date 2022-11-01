// read n number of values and display it in reverse order in an array
#include <stdio.h>
int main()
{
    int i, n, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n; i > 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}