// Swap number with a veriable.

#include <stdio.h>
int main()
{
    int x, y, temp;
    printf("X:");
    scanf("%d", &x);
    printf("\nY:");
    scanf("%d", &y);

    temp = x;
    x = y;
    y = temp;
    printf("\nX: %d \nY: %d", x, y);
}