// C program to find the GCD
// (Greatest Common Divisor) of given numbers
// using recursion

#include <stdio.h>

int calGCD(int num1, int num2)
{
    while (num1 != num2)
    {
        if (num1 > num2)
            return calGCD(num1 - num2, num2);
        else
            return calGCD(num1, num2 - num1);
    }
    return num1;
}

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("Enter Number1: ");
    scanf("%d", &num1);

    printf("Enter Number2: ");
    scanf("%d", &num2);

    printf("The Greatest Common Divisor is: %d\n", calGCD(num1, num2));

    return 0;
}
