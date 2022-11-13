/* Take a character from keyboard. Check if the character is
vowel/consonant/digit/special symbol. */
#include <stdio.h>

int main()
{
    char ch, lowercase, uppercase;

    printf("Enter any character: ");
    scanf("%c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        lowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
        uppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

        if (lowercase || uppercase)
        {
    	printf("\n %c is a VOWEL.", ch);
	    }
        else
        {
    	printf("\n %c is a CONSONANT.", ch);
	    }
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("'%c' is digit.", ch);
    }
    else
    {
        printf("'%c' is special character.", ch);
    }

    return 0;
}