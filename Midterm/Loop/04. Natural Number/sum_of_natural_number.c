//Calculate the Sum of Natural Numbers
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
    printf("Sum of natural numbers from 1 to %d is %d\n",n,sum);
    return 0;
}