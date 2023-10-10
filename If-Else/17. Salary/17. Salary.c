/* Take a person&#39;s salary from user. Give him 25% increment if his
salary is less than 10000. Give 10% increment if his salary is greater
than 50000. Otherwise, just provide him a 5000 taka increment. Print
his updated salary. */

#include <stdio.h>

int main() {
    float salary, inc;
    printf("Enter the salary:");
    scanf("%f", &salary);
    if(salary<10000){
        inc = salary * 0.25;
        salary = salary + inc;
        printf("New Salary: %.2f", salary);
    }
    else if(salary>50000){
        inc = salary * 0.10;
        salary = salary + inc;
        printf("New Salary: %.2f", salary);
    }
    else{
        salary = salary + 5000;
        printf("New Salary: %.2f", salary);
    }

    return 0;
}
