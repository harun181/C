/* Take a person&#39;s salary from user. Give him 25% increment if his
salary is less than 10000. Give 10% increment if his salary is greater
than 50000. Otherwise, just provide him a 5000 taka increment. Print
his updated salary. */
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
