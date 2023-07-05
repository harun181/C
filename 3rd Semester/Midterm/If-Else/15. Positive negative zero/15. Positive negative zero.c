/*Take a number from user. Print if the number is
positive/negative/zero. */

#include<stdio.h>
int main()
{

int n;
printf("Enter the number:");
scanf("%d", &n);
if(n>0)
{
    printf("%d is positive number.", n);
}
else if(n<0)
{
   printf("%d is negative number.", n);
}
else
{
    printf("%d is Nutural Number.", n);
}
return 0;
}
