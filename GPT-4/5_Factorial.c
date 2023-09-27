// 5. Factorial Numbers

#include <stdio.h>

int calcFact(int n) {
	
	const int m = n;
	int factorialOf = 1;

	while (factorialOf != m) {

		n = n*(m-factorialOf);
		factorialOf++;
	}

	return n;

}

int main (void) {
	
	int factorialOf;

	printf("Which number's factorial do you want to know?: ");
	scanf("%d", &factorialOf);

	printf("The factorial of %d is %d", factorialOf, calcFact(factorialOf));

	return 0;
}
