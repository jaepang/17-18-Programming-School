#include <stdio.h>

int main()
{
	int b_year;

	printf("Input your birth year: ");
	scanf("%d", &b_year);

	printf("\nSum of digits of %d is: %d + %d + %d + %d = %d\n\n", b_year,
		b_year / 1000,
		(b_year % 1000) / 100,
		(b_year % 100) / 10,
		b_year % 10,
		(b_year / 1000) + ((b_year % 1000) / 100 )+ ((b_year % 100) / 10) + (b_year % 10));

	return 0;
}
