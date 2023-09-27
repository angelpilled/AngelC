// 7. Arrays
// Declare an array, insert values, display them, find the maximum and minimum.
// Made by angelpilled, with the help of GPT-4!

#include <stdio.h>

// When you pass an array into a function, it decays into a pointer, so the actual size of the array is lost.
// We work out the size of the array - size_t - before it gets decayed, pass in the array - arrayName - as the second argument.
// (int) *arrayname and arrayname[] is basically the same, it gets "transformed" into a pointer when passed into a function. arrayname[] is basically a pointer in disguise (*arrayName).

int arraySize = 5;

void printArray(int *arrayName) {
	for (int i = 0; i < arraySize; i++) {
		printf("%d ", arrayName[i]);	
	}
	printf("\n");

}

int findMaximum(int *arrayName) {
	int greatestNumber = arrayName[0];

	for (int i = 0; i < arraySize; i++)
	{
		if (greatestNumber > arrayName[i])
		{
			continue;	
		}
		
		else if (arrayName[i] > greatestNumber)
		{
			greatestNumber = arrayName[i];
		}

		else
		{
			continue;
		}
	}

	return greatestNumber;
} 

int findMinimum(int *arrayName) {
	int smallestNumber = arrayName[0];

	for (int i = 0; i < arraySize; i++)
	{
		if (smallestNumber <= arrayName[i])
		{
			continue;
		}

		else if (arrayName[i] < smallestNumber)
		{
			smallestNumber = arrayName[i];	
		}

		else
		{
			continue;
		}
	}

	return smallestNumber;

}

int main (void) {
		
	int numberArray[5];
	int tempNum;

	printf("Please pass in 5 different numbers:\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d. Number: ", i+1);
		scanf("%d", &tempNum);
		// printf("%d", tempNum);
		numberArray[i] = tempNum;

	}
	
	printf("The number array consists of: ");
	printArray(numberArray);
	printf("So by this means, the smallest number in the array is %d, while the largest is %d.\n", findMinimum(numberArray), findMaximum(numberArray));

}
