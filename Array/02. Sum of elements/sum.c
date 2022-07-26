#include <stdio.h>
int main()
{
    int i, n, a[100], sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum of all elements is: %d", sum);
    return 0;
}