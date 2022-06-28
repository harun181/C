
#include <stdio.h>


int main() {
    int mark;
    printf("Enter the Mark:");
    scanf("%d", &mark);

    if(mark<33){
        printf("Result: Fail");
    }
    else if(mark>=33 && mark<40){
        printf("Result: D");
    }
    else if(mark>=40 && mark<50){
        printf("Result: C");
    }
    else if(mark>=50 && mark<60){
        printf("Result: B");
    }
    else if(mark>=60 && mark<70){
        printf("Result: A-");
    }
    else if(mark>=70 && mark<80){
        printf("Result: A");
    }
    else if(mark>=80 && mark<=100){
        printf("Result: A+");
    }

    return 0;
}
