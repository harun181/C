#include <stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter consumed unit:");
    scanf("%d", &unit);


    switch(unit > 0 && unit <= 199)
    {
        case 1:
           bill = unit * 1.20;
           break;

        case 0:
            switch(unit >= 200 && unit < 400)
            {
            case 1:
            bill = unit * 1.50;
            break;

            case 0:
            switch(unit >= 400 && unit < 600)
            {
            case 1:
            bill = unit * 1.80;
            break;
            
            case 0:
            switch(unit >= 600)
            {
            case 1:
            bill = unit * 2.00;
            break;
            }
            }
            }
    }

    switch(bill < 100){
        case 1:
        bill = 100;
        printf("Electricity Bill: %.2f", bill);
        break;

        case 0:
        switch(bill > 400)
        {
            case 1:
            bill = bill + (bill * 0.15);
            printf("Electricity Bill: %.2f", bill);
            break;
        }
    }
    
    return 0;
}