//check whether a number is Prime number or not
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is not a prime number\n",n);
    }
    else
    {
        printf("%d is a prime number\n",n);
    }
    return 0;
}



