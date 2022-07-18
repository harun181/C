#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Vowel");
        break;

    default:
        printf("Consonant");
        break;
    }

    switch (ch >= '0' && ch <= '9')
    {
    case 1:
        printf("'%c' is digit.", ch);
        break;

    default:
        printf("'%c' is special character.", ch);
        break;
    }

    return 0;
}