#include <stdio.h>
#include <stdlib.h>

int* InitArray(int size);
int* SelectionSort(int *arr, int size);
void PrintSortedArray(int *arr, int size);

int main(){
  int size, *arr, *sorted_arr;
  printf("Please input size of array: ");
  scanf("%d", &size);
  arr = InitArray(size);
  sorted_arr = InitArray(size);
  printf("Please input value:\n");
  for(int i=0; i<size; i++){
    printf("A[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  sorted_arr = SelectionSort(arr, size);
  PrintSortedArray(sorted_arr, size);
  return 0;
}

int* InitArray(int size){
  int *arr = (int *)malloc(size * sizeof(int));
  return arr;
}
int* SelectionSort(int *arr, int size){
  int i, j, mPos, temp;

  for(i=0; i<size; i++){
    mPos = i;
    for(j=i; j<size; j++){
      if(arr[mPos] < arr[j]){
        mPos = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[mPos];
    arr[mPos] = temp;
  }

  return arr;
}

void PrintSortedArray(int *arr, int size){
  printf("\nArray after sorting in descending order:\n");
  for(int i=0; i<size; i++){
    printf("a[%d] = %d\n", i, arr[i]);
  }
  printf("\n");
}
