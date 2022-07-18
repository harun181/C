#include <stdio.h>
int main()
{
    int x, y, z;
    char a;
    printf("Input two numbers\n");
    scanf("%d %d", &x, &y);
    fflush(stdin);
    printf("Enter operator (+,-,*,/,%)\n");
    scanf("%c", &a);
    switch (a)
    {
    case '+':
        z = x + y;
        break;
    case '-':
        z = x - y;
        break;
    case '*':
        z = x * y;
        break;
    case '/':
        z = x / y;
        break;
    case '%':
        z = x % y;
        break;
    }
    printf("Ans = %d\n", z);
}