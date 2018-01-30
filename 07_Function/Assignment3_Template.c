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
  /* Fill From Here */

  /* Fill to Here */
  sorted_arr = SelectionSort(arr, size);
  PrintSortedArray(sorted_arr, size);
  return 0;
}

int* InitArray(int size){
  int *arr = (int *)malloc(size * sizeof(int));
  return arr;
}
int* SelectionSort(int *arr, int size){
  /* Fill Here */
  return arr;
}

void PrintSortedArray(int *arr, int size){
  /* Fill Here */
}
