//separte the odd and even numbers from an array and put it in other arrays called odd and even
#include <stdio.h>
    int
    main()
{
    int i, n, a[100], odd[100], even[100];
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
            even[i] = a[i];
        }
        else
        {
            odd[i] = a[i];
        }
    }
    printf("Even numbers are: ");
    for (i = 0; i < n; i++)
    {
        if (even[i] != 0)
        {
            printf("%d ", even[i]);
        }
    }
    printf("\nOdd numbers are: ");
    for (i = 0; i < n; i++)
    {
        if (odd[i] != 0)
        {
            printf("%d ", odd[i]);
        }
    }
    return 0;
}