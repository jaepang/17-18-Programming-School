#include <stdio.h>

int main(){
  int i=3;
  int j = ++i;//4, i=4
  int k = i++;//4, i=5
  int q = i--;//5, i=4
  int l = --i;//3, i=3

  printf("i : %d, j : %d, k : %d, q : %d, l : %d\n", i, j, k, q, l);

  return 0;
}
