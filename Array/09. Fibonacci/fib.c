//print fibonacci series using array
#include<stdio.h>
int main()
{
    int n,i,a[100],b[100],c[100];
    printf("Enter the number\n");
    scanf("%d",&n);
    a[0]=0;
    b[0]=1;
    c[0]=0;
    for(i=1;i<=n;i++)
    {
        c[i]=a[i-1]+b[i-1];
        a[i]=b[i-1];
        b[i]=c[i];
    }
    for(i=0;i<=n;i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}