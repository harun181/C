//count the total number of duplicate elements in an array
#include <stdio.h>
int main()
{
    int i, n, a[100], count = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }
    printf("Total number of duplicate elements is: %d", count);
    return 0;
}