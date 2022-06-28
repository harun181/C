
#include <stdio.h>
 int main() {
    int age;
    char gen;
    printf("Enter the gender: ");
    scanf("%c", &gen);
    printf("Enter the age: ");
    scanf("%d", &age);


    if(age>=18 && gen == 'M'){
        printf("He can vote");
    }
    else if(age>=18 && gen == 'F'){
        printf("She can vote");
    }
    else if(age<18 && gen == 'M'){
        printf("He can not vote");
    }
    else if(age<18 && gen == 'F'){
        printf("She can not vote");
    }

    return 0;
}
