#include <stdio.h>

int main()
{
    char ch;
    int lowercase, uppercase;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);

    lowercase = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');

    if (lowercase || uppercase) {
    	printf("\n %c is a VOWEL.", ch);
	}
    else {
    	printf("\n %c is a CONSONANT.", ch);
	}
    return 0;
}