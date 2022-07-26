//Check a Number is Palindrome or Not
#include <stdio.h>
int main()
{
    int n, temp, rev = 0, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (temp == rev)
    {
        flag = 1;
    }
    if (flag == 1)
    {
        printf("%d is a palindrome number", temp);
    }
    else
    {
        printf("%d is not a palindrome number", temp);
    }
    return 0;
}