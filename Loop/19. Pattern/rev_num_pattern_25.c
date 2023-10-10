#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        // Logic to print spaces
        for (j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Logic to print numbers
        for (j = 1; j <= N - i + 1; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}