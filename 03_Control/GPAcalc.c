#include <stdio.h>

int main(){
  int score;
  scanf("%d", &score);
  if(90 <= score && score <= 100){
    printf("A\n");
  }
  else if(80 <= score){
    printf("B\n");
  }
  else if(70 <= score){
    printf("C\n");
  }
  else if(60 <= score){
    printf("D\n");
  }
  else{
    printf("F\n");
  }
  return 0;
}
