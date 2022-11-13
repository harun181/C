/* Take 3 numbers from user. Find the minimum number. */

#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter three number:");
    scanf("%d %d %d", &x, &y, &z);
    if(x<y && x<z){
        printf("%d is Minimum", x);
    }
    else if(y<y && y<z){
        printf("%d is Minimum", y);
    }
    else{
        printf("%d is Minimum", z);
    }

    return 0;
}

