#include <stdio.h>

int main (void) {

	long int factorial; // "long" extends the range of the variable "factorial"
	short int szam1 = 10;

	// when using "long long int", "long int", "short int" or "unsigned int", you can omit the keyword "int", like this:
	short omitted = 30;

	// unsigned can be assigned to integers or chars, using unsigned on integers basically means positive numbers
	// unsigned num1;
	// unsigned character

	printf("%i", szam1);

	return 0;	
}
