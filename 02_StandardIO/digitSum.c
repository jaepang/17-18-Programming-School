#include <stdio.h>
#include <math.h>

int main(){
  int flag = 0, digits = 0, power, sum = 0;;
  unsigned int num, sv;
  printf("input integer whatever you want (up to 4294967295) : ");
  scanf("%u", &num);

  for(sv = num; sv > 10; sv /= 10)
    digits ++;

  power = pow(10, digits);
  printf("power : %d\n", power);
  printf("Sum of digits of %u is: ", num);
  while(power > 0) {
    sv = num / power;
    sum += sv;

    /* For Output Format */
    if(!flag)
      printf("%d + ", sv);
    else
      printf("%d = ", sv);

    if(power == 10)
      flag = 1;

    /* For Next Loop */
    num %= power;
    power /= 10;
  }
  printf("%d\n", sum);
}
