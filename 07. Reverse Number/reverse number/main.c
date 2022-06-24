#include <stdio.h>

int main() {

  int n, reverse, x, y;

  printf("Enter an integer: ");
  scanf("%d", &n);

  x = n/10;
  y = n%10;
  reverse = (x*1) + (y*10);

  printf("Reversed number = %d", reverse);

  return 0;
}
