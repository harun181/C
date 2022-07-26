//C program to Calculate 1 + 2 + 3 + 4 + 5 + ... + n series
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of 1+2+3+4+5+...+%d is %d",n,sum);
    return 0;
}