//insert a new value in the array(unsorted list)
#include <stdio.h>
    int main()
{
    int i, n, a[100], x, pos;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the value to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position: ");
    scanf("%d", &pos);
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = x;
    printf("The array after insertion is: ");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}