#include <stdio.h>

int main (void) {
	int OctalHexaInt;
	float SF;

	// The next few lines are assigning values to the already declared variables

	OctalHexaInt = 15;
	SF = 3.14;

	/* 
	 
	   %d is for decimal numbers
	   %x is for hexadecimal
	   %o is for octal
	   %f is for floating numbers
	   %f is for double (like float) types too
	   %e is for scientific notation of floating numbers
	   %g lets printf decide whether or not to display the floating-point value in normal notation or in scientific notation, and also removes additional zeros
	   %i data type for booleans or decimal

	   %c is for char (declaring looks like the following: 'w')

		alternatively, hashtags are used between percent signs and letters, like %#x or %#o. This will display the full format of the data types.

	 */

	printf("Integer value of OctalHexaInt is %d\nOctal value of OctalHexaInt in %#o\nHexadecimal value of OctalHexaInt is %#x\n", OctalHexaInt, OctalHexaInt, OctalHexaInt);
	printf("Floating value of SF is %f\nScientific value of SF is %e\n", SF, SF);
	return 0;

}
