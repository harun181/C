#include <stdio.h>
int main()
{
    int age;
    char gen;
    printf("Enter Gender:");
    scanf("%c", &gen);
    printf("Enter Age:");
    scanf("%d", &age);
    switch (age >= 18 && gen == 'M')
    {
    case 1:
        printf("He Can Vote.");
        break;
    case 0:
        switch (age >= 18 && gen == 'F')
        {
        case 1:
            printf("She Can Vote.");
            break;

        default:
            printf("He/She Can't Vote.");
            break;
        }
    }

    return 0;
}