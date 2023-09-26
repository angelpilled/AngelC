// 2. User Input

#include <stdio.h>

int main (void) {

	char usersName[50];

	printf("Please enter your name: ");
	scanf("%s", usersName);

	printf("Hello, %s!", usersName);

	return 0;

}
