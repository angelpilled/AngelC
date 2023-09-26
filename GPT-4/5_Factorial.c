// 5. Factorial Numbers

#include <stdio.h>

int calcFact(int factorialOf) {
	
	int n;
	
	while(factorialOf != 1) {
		n = factorialOf	* (factorialOf-1);
		factorialOf = factorialOf-1;
		printf("%d", factorialOf);

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
