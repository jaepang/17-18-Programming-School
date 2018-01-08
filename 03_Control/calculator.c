#include <stdio.h>

int main(){
  char oper;
  int a, b;
  scanf("%d %c %d", &a, &oper, &b);
  switch (oper) {
    case '+':
      printf("%d\n", a+b);
      break;
    case '-':
      printf("%d\n", a-b);
      break;
    case '*':
      printf("%d\n", a*b);
      break;
    case '/':
      printf("%d\n", a/b);
      break;
    default:
      printf("There's an ERROR! Check Operator.\n");
      break;
  }
  return 0;
}
