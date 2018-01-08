#include <stdio.h>

int main(){
  int i, j;
  /* Using continue */
  printf("<----This is Version Using continue && break---->\n");
  for(i=2; i<=9 ; i++){
    if(i % 2){
      continue;
    }
    else{
      j = 1;
      while(1){
        if(i < j){
          break;
        }
        printf("%d * %d = %d\n", i, j, i*j);
        j ++;
      }
    }
  }
  /* Using Just for */
  printf("\n<----This is Version Using only for---->\n");
  for(i=2; i<9; i*=2){
    for(j=1; j<=i; j++){
      printf("%d * %d = %d\n", i, j, i*j);
    }
  }
  return 0;
}
