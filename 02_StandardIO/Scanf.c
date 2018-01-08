#include <stdio.h>

int main(){
  int a, b, c;

  printf("숫자를 하나 입력하세요 : ");
  scanf("%d", &a);

  printf("입력하신 숫자는 %d입니다.\n\n", a);

  printf("숫자를 두개 입력하세요 : ");
  scanf("%d%d", &b, &c);

  printf("입력하신 숫자는 %d, %d입니다.\n\n", b, c);

  return 0;
}
