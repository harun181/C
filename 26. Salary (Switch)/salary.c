#include<stdio.h>
int main()
{
    float salary;
    printf("Enter the Salary:");
    scanf("%f", &salary);

    switch(salary<10000)
    {
    case 1:
        salary = salary + (salary * .25);
        printf("New Salary: %.2f", salary);
        break;
    case 0:
        switch(salary>50000)
        {
        case 1:
            salary = salary + (salary * .10);
            printf("New Salary: %.2f", salary);
            break;
        default:
            salary = salary + 5000;
            printf("New Salary: %.2f", salary);

        }
    }



    return 0;
}
