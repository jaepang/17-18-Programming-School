#include <stdio.h>

int main() {
   int arr[100];
   int i = 0;
   int sum = 0;

   while (1) {
      scanf("%d", &arr[i]);
      if (arr[i] == 0) {
         for (int j = 0; j < (i - 1); j++) {
            printf("%d,", arr[j]);
         }
         printf("%d", arr[i - 1]);
         break;
      }
      i++;
   }


   for (int k = 0; k < i; k++) {
      sum += arr[k];
   }

   printf("\n%d", sum);
   return 0;
}
