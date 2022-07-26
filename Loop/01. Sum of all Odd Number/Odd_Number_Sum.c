//sum of all odd numbers between 1 to n
#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of all odd numbers between 1 to %d is %d",n,sum);
    return 0;
}
