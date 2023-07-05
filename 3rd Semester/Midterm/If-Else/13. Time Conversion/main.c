#include <stdio.h>

int main()
{
    int N, hour, minute, second;
    printf("Enter Second:");
    scanf("%d", &N);
    hour = N % 12;
    minute = N % 60;
    second = N / 60;
    printf("%d:%d:%d\n", hour, minute, second);

    return 0;
}