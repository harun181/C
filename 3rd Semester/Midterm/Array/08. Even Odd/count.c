/* C Program to Count Even and Odd Numbers in an Array */
#include <stdio.h>

int main()
{
    int Size, i, a[10];
    int Even_Count = 0, Odd_Count = 0;

    printf("\n Please Enter the Size of an Array :  ");
    scanf("%d", &Size);

    printf("\nPlease Enter the Array Elements\n");
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < Size; i++)
    {
        if (a[i] % 2 == 0)
        {
            Even_Count++;
        }
        else
        {
            Odd_Count++;
        }
    }

    printf("\n Total Number of Even Numbers in this Array = %d ", Even_Count);
    printf("\n Total Number of Odd Numbers in this Array = %d ", Odd_Count);
    return 0;
}