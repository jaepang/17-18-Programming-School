#include <stdio.h>

int main(){
  int first, second, sum=0;
  scanf("%d%d", &first, &second);
  for(int i=first; i<second; i++){
    sum += i;
  }
  printf("The Sum between %d and %d is %d.\n", first, second, sum);
  return 0;
}
