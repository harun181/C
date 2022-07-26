//check whether a number is Armstrong number or not
#include<stdio.h>
int main()
{
    int n,sum=0,rem,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(sum==n)
    {
        printf("%d is an Armstrong number\n",n);
    }
    else
    {
        printf("%d is not an Armstrong number\n",n);
    }
    return 0;
}