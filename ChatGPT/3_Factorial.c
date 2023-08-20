#include <stdio.h>

int main() {
	int OrigNumber = 4;
	int startingNum = 1;
	int FactNumber;

	for (int i = startingNum+1; i <= OrigNumber; i++ ) {
		FactNumber = startingNum * i;
		printf("%d", FactNumber);
	}

}
