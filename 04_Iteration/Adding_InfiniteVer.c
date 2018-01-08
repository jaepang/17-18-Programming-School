#include <stdio.h>

int main(){
  int input, sum=0;
  while(1){
    printf("Enter Integer (0 to quit) : ");
    scanf("%d", &input);
    if(!input){
      break;
    }
    else{
      sum += input;
    }
  }
  printf("Sum : %d", sum);
  return 0;
}
