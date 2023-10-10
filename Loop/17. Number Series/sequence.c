// C Print 1, 2, 3, 4... upto N Term

#include <stdio.h>
int main()
{
    int N, i;
    printf("Enter the value of N (limit): ");
    scanf("%d", &N);
    printf("\n");
    for (i = 1; i <= N; i++)
    {
        if (i == N)
            printf("%d", i);
        else
            printf("%d,", i);
    }
    return 0;
}