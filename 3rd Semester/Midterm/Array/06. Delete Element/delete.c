//delete an element at the desired position from an array
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
    printf("Enter the value to be deleted: ");
    scanf("%d", &x);
    printf("Enter the position: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("The array after deletion is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}