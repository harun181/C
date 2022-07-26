//print the number of digits in given integers
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("Number of digits in the number: %d", count);
    return 0;
}