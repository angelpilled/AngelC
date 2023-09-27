// 6. Fibonacci Sequence
// https://github.com/angelpilled/AngelC/tree/master/GPT-4

#include <stdio.h>

int FibonacciSequence(int t) {
	
	int t1 = 0, t2 = 1, sum;
	
	for (int iteration = 1; iteration < t; iteration++) {
		sum = t1 + t2;
		t1 = t2;
		t2 = sum;
		printf("%d ", sum);
	}

	return 0;

}

int main (void) {

	int t;

	printf("Number of terms I want to display: ");
	scanf("%d", &t);

	printf("The Fibonacci sequence with %d terms: %d ", t, 0);
	FibonacciSequence(t);


	return 0;
}
