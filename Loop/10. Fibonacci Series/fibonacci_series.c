//print Fibonacci series up to n terms
#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("%d\n%d",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}