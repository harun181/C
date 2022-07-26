// findout largest, smallest, average number in an array
#include <stdio.h>
int main()
{
    int i, n, a[100], max = 0, min = 0, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Maximum element is: %d", max);
    printf("\nMinimum element is: %d", min);
    printf("\nAverage element is: %d", sum / n);
    return 0;
}