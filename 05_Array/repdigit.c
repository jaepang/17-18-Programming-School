#include <stdio.h>

int main() {
  int digit_seen[10] = {0};
  int digit;
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  while (n > 0) {
    digit = n % 10;
    if (digit_seen[digit]==1) {
      printf("Repeated digit\n");
      return 0;
    }
    digit_seen[digit] = 1;
    n /= 10;
  }
  printf("No repeated digit\n");
  return 0;
}
