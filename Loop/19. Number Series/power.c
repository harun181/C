// C program to Calculate (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) series
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    clrscr();
    n = 10;
    for (i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    printf("Sum: %d", sum);
    return 0;
}