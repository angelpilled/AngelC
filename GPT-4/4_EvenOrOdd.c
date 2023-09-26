// 4. Even Or Odd

#include <stdio.h>

int OddEven(int theNumber) {

	if (theNumber % 2 == 0) {
		return 0;
	}

	else {
		return 1;
	}

}

const char* checkIf(int returnValue) {

	if (returnValue == 0) {
		return "even";
	}

	else {
		return "odd";
	}
}

int main(void) {

	int theNumber;

	printf("Please enter your choice of number: ");
	scanf("%d", &theNumber);

	printf("The specified number is %s.", checkIf(OddEven(theNumber)));

	return 0;
}
