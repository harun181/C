//Check if a given year is leap year or not.
#include <stdio.h>
void main()
{
    int yr;
    printf ("Enter a year: ");
    scanf ("%d", &yr);

    if (yr%4 == 0 && yr%100 == 0 || yr%400 == 0)
        printf("It is LEAP YEAR.");
        
    else
        printf ("It is NOT LEAP YEAR.");
}