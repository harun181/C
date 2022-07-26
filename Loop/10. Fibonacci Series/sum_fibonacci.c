#include<stdio.h>
int main()
{
   int a=0, b=1, num, c, sum=0;

   printf("Enter number of terms: ");
   scanf("%d",&num);

   for(int i=0; i<num; i++)
   {
      sum += a;
      c = a + b; //next element
      a = b;
      b = c;
   }

   printf("Sum = %d", sum);

   return 0;
}