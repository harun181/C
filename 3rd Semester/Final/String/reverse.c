#include <stdio.h>
#include <string.h>

void main()
{
    int i, n;
    char str[20];
    printf("Enter the String to get reversed\n");
    gets(str);
    printf("\nReversed string is \n");

    for (n = 0; str[n] != '\0'; ++n);
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}