//factorial of a given number
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}