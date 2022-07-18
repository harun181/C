#include <stdio.h>
int main()
{
    int age;
    char gender;

    printf("Enter your gender(M/F)\n");
    scanf("%c", &gender);
    printf("Enter your age \n");
    scanf("%d", &age);

    switch (gender == 'M' || gender == 'm')
    {
    case 1:
        switch (age >= 21)
        {
        case 1:
            printf("He is eligible for marriage :)\n");
            break;
        case 0:
            printf("He is not eligible for marriage :(\n");
            break;
        }
        break;
    case 0:
        switch (age >= 18)
        {
        case 1:
            printf("She is eligible for marriage :)\n");
            break;
        case 0:
            printf("She is not eligible for marriage :(\n");
            break;
        }
        break;
    }
    return 0;
}
