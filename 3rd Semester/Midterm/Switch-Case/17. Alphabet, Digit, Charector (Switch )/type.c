//Write a C program to design a simple CALCULATOR.
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
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Digit");
        break;
    case '`':
    case '~':
    case '@':
    case '$':
    case '%':
    case '^':
    case '&':
    case '*':
    case '(':
    case ')':
    case '-':
    case '_':
    case '=':
    case '+':
    case ']':
    case '}':
    case '[':
    case '{':
    case '/':
    case '"':
    case ';':
    case ':':
    case '?':
    case '.':
    case '>':
    case ',':
    case '<':
    printf("Special Charector");
        break;

    default:
        printf("Consonant");
        break;
    }


    return 0;
}