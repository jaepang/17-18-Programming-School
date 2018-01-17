#include <stdio.h>

int main(){
  int input[110], sum=0, i, j, num;
  for(i=0; i<100; i++){
    scanf("%d", &num);
    if(!num){
      break;
    }
    else{
      input[i] = num;
      sum += input[i];
    }
  }
  for(j=0; j<i; j++){
    if(j == i-1){
      printf("%d\n", input[j]);
    }
    else{
      printf("%d, ", input[j]);
    }
  }
  printf("Sum : %d\n", sum);
  return 0;
}
