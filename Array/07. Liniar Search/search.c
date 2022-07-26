//find an element in a given array (Linear search)
#include <stdio.h>
int main()
{
    int i, n, a[100], x, pos = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value to be searched: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == 0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at position: %d", pos);
    }
    return 0;
}