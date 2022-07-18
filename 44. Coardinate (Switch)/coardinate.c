#include <stdio.h>
int main()
{
    int co1, co2;

    printf("Input the values for X and Y coordinate : ");
    scanf("%d %d", &co1, &co2);

    switch (co1 > 0 && co2 > 0)
    {
    case 1:
        printf("The coordinate point (%d,%d) lies in the First quandrant.\n", co1, co2);
        break;
    case 0:
        switch (co1 < 0 && co2 > 0)
        {
        case 1:
            printf("The coordinate point (%d,%d) lies in the Second quandrant.\n", co1, co2);
            break;
        case 0:
            switch (co1 < 0 && co2 < 0)
            {
            case 1:
                printf("The coordinate point (%d, %d) lies in the Third quandrant.\n", co1, co2);
                break;
            case 0:
                switch (co1 > 0 && co2 < 0)
                {
                case 1:
                    printf("The coordinate point (%d,%d) lies in the Fourth quandrant.\n", co1, co2);
                    break;
                default:
                    printf("The coordinate point (%d,%d) lies at the origin.\n", co1, co2);
                    break;
                }
            }
        }
    }

    return 0;
}