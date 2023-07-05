// C program to check a given number is prime or not
// using recursion

#include <stdio.h>

int checkPrime(int num, int i)
{
    if (i != 1)
    {
        if (num % i != 0)
        {
            return checkPrime(num, i - 1);
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkPrime(num, num / 2) == 1)
        printf("Given number is prime number");
    else
        printf("Given number is not prime number");

    return 0;
}
