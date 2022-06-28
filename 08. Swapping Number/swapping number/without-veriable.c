// Swap Number without a veriable.
#include <stdio.h>
int main()
{
    int x, y;
    printf("X:");
    scanf("%d", &x);
    printf("\nY:");
    scanf("%d", &y);

    x = x + y - (y = x);
    printf("\nX: %d \nY: %d", x, y);
}
