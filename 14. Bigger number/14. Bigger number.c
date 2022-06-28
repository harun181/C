
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two number:");
    scanf("%d %d", &x, &y);
    if(x>y ){
        printf("%d is Bigger than %d", x, y);
    }
    else{
        printf("%d is Bigger than %d", y, x);
    }

    return 0;
}
