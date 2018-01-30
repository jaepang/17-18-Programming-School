#include <stdio.h>

void printPrime(int size);

int main(){
  int size;

  while(1){
    printf("Input Number n: ");
    scanf("%d", &size);
    if(size < 2){
      printf("-> Only consider number which is bigger than 1. Please input again !!!\n\n");
    }
    else{
      printPrime(size);
      break;
    }
  }

  return 0;
}

void printPrime(int size){
  int cnt;
  printf("-> List of prime numbers from 2 to %d:\n", size);
  for(int i=2; i<=size; i++){
    cnt = 0;
    for(int j=1; j<=i; j++){
      if(i%j == 0){
        cnt ++;
      }
    }
    //printf("----cnt for %d is %d----\n", i, cnt);
    if(cnt == 2){
      printf("%d ", i);
    }
  }
  printf("\n\n");
}
