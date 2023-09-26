// 3. Basic Arithmetics

#include <stdio.h>

int main (void) {
	
	float num1, num2;

	printf("Please enter first number: ");
	scanf("%g", &num1);

	printf("Please enter second number: ");
	scanf("%g", &num2);

	printf("%g + %g = %g\n", num1, num2, num1+num2);
	printf("%g - %g = %g\n", num1, num2, num1-num2);
	printf("%g * %g = %g\n", num1, num2, num1*num2);
	printf("%g / %g = %g\n", num1, num2, num1/num2);

// %g basically decides whether or not display a floating point number (if available, print it, if not, then don't.)

	return 0;


}
