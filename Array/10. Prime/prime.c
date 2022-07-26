// separte the prime numbers from array
#include <stdio.h>
int main()
{
    int i, n, a[100], prime[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            prime[i] = a[i];
        }
        else
        {
            prime[i] = 0;
        }
    }
    printf("Prime numbers are: ");
    for (i = 0; i < n; i++)
    {
        if (prime[i] != 0)
        {
            printf("%d ", prime[i]);
        }
    }
    return 0;
}