
#include <stdio.h>
#include<math.h>
int main(){
  char op;
  int first, second;

  printf("Enter two operands: ");
  scanf("%d %d", &first, &second);
  input:
  printf("Enter an operator: ");
  fflush(stdin);
  scanf("%c", &op);

  if(op == '+'){
      printf("%d + %d = %d", first, second, first + second);
  }
  else if(op == '-'){
      printf("%d - %d = %d", first, second, first - second);
  }
  else if(op == '*'){
      printf("%d * %d = %d", first, second, first * second);
  }
  else if(op == '/'){
      printf("%d / %d = %d", first, second, (float)first / second);
  }
  else if(op == '%'){
      printf("%d % %d = %d", first, second, first % second);
  }
  else{
    printf("Wrong Input, Try Again.\n");
    goto input;
  }
  return 0;
}

