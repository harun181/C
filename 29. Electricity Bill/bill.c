// Electrycity Bill 
#include <stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter consumed unit:");
    scanf("%d", &unit);
    {

        if (unit > 0 && unit <= 199)
        {
            bill = unit * 1.20;
        }
        else if (unit >= 200 && unit < 400)
        {
            bill = unit * 1.50;
        }
        else if (unit >= 400 && unit < 600)
        {
            bill = unit * 1.80;
        }
        else if (unit >= 600)
        {
            bill = unit * 2.00;
        }
    }

    {
        if (bill < 100)

            bill = 100;

        else if (bill > 400)

            bill = bill + (bill * 0.15);
        else

            bill = bill;
    }

    printf("Electricity Bill: %.2f", bill);

    return 0;
}