// C program to check a string is palindrome or not
// without using library function

#include <stdio.h>
#include <string.h>

int main()
{
    char str[32] = {0};
    char rev[32] = {0};

    int cnt1 = 0;
    int cnt2 = 0;

    int len = 0;
    int flg = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[cnt1++] != '\0')
        len++;

    // Reverse the string.
    cnt1 = 0;
    cnt2 = len - 1;
    while (cnt2 >= 0)
        rev[cnt1++] = str[cnt2--];

    rev[len] = '\0';

    for (cnt1 = 0; cnt1 < len; cnt1++)
    {
        if (str[cnt1] != rev[cnt1])
        {
            flg = 1;
            break;
        }
    }

    if (flg == 0)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}
