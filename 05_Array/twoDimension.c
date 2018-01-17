#include <stdio.h>

int main(){
  int matrix[2][5];
  for(int i=0; i<2; i++){
    for(int j=0; j<5; j++){
      matrix[i][j] = i + j;
    }
  }
  for(int i=0; i<2; i++){
    for(int j=0; j<5; j++){
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
