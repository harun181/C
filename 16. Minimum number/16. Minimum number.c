
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
