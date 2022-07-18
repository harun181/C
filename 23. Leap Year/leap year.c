#include <stdio.h>

int main()
{
    int yr;
    printf ("Enter a year: ");
    scanf ("%d", &yr);

    if (yr%4 == 0 && yr%100 == 0 || yr%400 == 0)
        printf("It is LEAP YEAR.");
        
    else
        printf ("It is NOT LEAP YEAR.");

    return 0;
}