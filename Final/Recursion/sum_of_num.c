#include <stdio.h>

// create sum function
int sumNum(int num)
{
    int sum;
    // base case
    if (num == 1)
    {
        return 1;
    }
    else
    {
        sum = num + sumNum(num - 1);
    }
    return sum;
}

int main()
{
    int num, result;
    printf("Please enter the range: ");
    scanf("%d", &num);
    result = sumNum(num);
    printf("Sum of 1 to %d: %d", num, result);

    return 0;
}