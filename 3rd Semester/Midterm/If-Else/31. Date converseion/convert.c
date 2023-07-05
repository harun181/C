// Program to convert Days into years, months and Weeks
#include <stdio.h>
int main()
{
    int days, years, weeks;
    // Ask user to input number of days
    printf("Enter days: ");
    scanf("%d", &days);
    // Ignoring leap year
    years = (days / 365);
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    // Print the result
    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);
    return 0;
}