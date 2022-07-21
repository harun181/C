/* Collect a person&#39;s age and gender. Print if he/she is eligible for
marriage or not. */
#include <stdio.h>
 int main() {
    int age;
    char gen;
    printf("Enter the gender:");
    scanf("%c", &gen);
    printf("Enter the age:");
    scanf("%d", &age);


    if(age>=21 && gen == 'M' || age>=21 && gen == 'F'){
        printf("Eligable for Marriage");
    }
    else{
        printf("Not Eligable for Marriage");
    }

    return 0;
}

