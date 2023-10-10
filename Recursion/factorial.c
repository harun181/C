// Base Case where this function will stop
// Recursive Call to do sam things untill base case

// Lets Start Codding

#include <stdio.h>

// create factorial function
int fact(int num)
{
    int sum;
    // base case
    if (num == 1)
    {
        return 1;
    }
    else
    {
        sum = num * fact(num - 1);
    }
    return sum;
}

int main()
{
    int num, result;
    printf("Please enter a number: ");
    scanf("%d", &num);
    result = fact(num);
    printf("Factorial of %d is: %d", num, result);

    return 0;
}