#include <stdio.h>
#define MAX 10

int findIndex(int arr[10], int size);
int findMax(int arr[10], int size);

int main(){
  int size, arr[10], mindex, max;
  while(1){
    printf("Please input size of array: ");
    scanf("%d", &size);
    if(size >= MAX){
      printf("Size of array has to smaller than 10. Please input again.\n\n");
    }
    else{
      break;
    }
  }
  printf("Please input value:\n");
  for(int i=0; i<size; i++){
    printf("A[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  printf("\n");

  mindex = findIndex(arr, size);
  max = findMax(arr, size);

  printf("The maximum element in this array is a[%d] = %d\n\n", mindex, max);

  return 0;
}

int findIndex(int arr[10], int size){
  int idx = 0, max = arr[0];
  for(int i=0; i<size; i++){
    if(max < arr[i]){
      max = arr[i];
      idx = i;
    }
  }
  return idx;
}
int findMax(int arr[10], int size){
  int max = arr[0];
  for(int i=0; i<size; i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }
  return max;
}
