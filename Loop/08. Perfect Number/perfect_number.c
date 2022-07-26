//check whether a number is Perfect number or not
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("%d is a Perfect number\n",n);
    }
    else
    {
        printf("%d is not a Perfect number\n",n);
    }
    return 0;
}