#include <stdio.h>

int main(){
  int num;
  char c;

  printf("숫자를 입력하세요");
  scanf("%d", &num);

  /* Solve Buffer issue */
  getchar();

  printf("문자를 입력하세요");
  scanf("%c", &c);

  printf("숫자 : %d, 문자 : %c입니다\n", num, c);

  return 0;
}
