#include <stdio.h>

void Multiply(int matrx1[2][3], int matrx2[3][2], int result[2][2]);

int main(){
  int matrx1[2][3], matrx2[3][2], result[2][2];
  printf("Please input value for matrix A[2][3]:\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("A[%d][%d]: ", i, j);
      scanf("%d", &matrx1[i][j]);
    }
  }
  printf("\nMatrix A[2][3]:\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      printf("%3d", matrx1[i][j]);
    }
    printf("\n");
  }

  printf("\nPlease input value for matrix B[3][2]:\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
      printf("B[%d][%d]: ", i, j);
      scanf("%d", &matrx2[i][j]);
    }
  }
  printf("\nMatrix B[3][2]:\n");
  for(int i=0; i<3; i++){
    for(int j=0; j<2; j++){
      printf("%3d ", matrx2[i][j]);
    }
    printf("\n");
  }
  Multiply(matrx1, matrx2, result);

  printf("\nMultiplying two matrix:\n");
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      printf("%3d ", result[i][j]);
    }
    printf("\n");
  }
  return 0;
}

void Multiply(int matrx1[2][3], int matrx2[3][2], int result[2][2]){
  int sum;
  for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
      sum = 0;
      for(int k=0; k<3; k++){
        sum += matrx1[i][k] * matrx2[k][j];
      }
      result[i][j] = sum;
    }
  }
}
