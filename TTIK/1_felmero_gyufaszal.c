// TTIK
// Gyufaszál program
// Írj programot, amely megadja, hogy N gyufaszálból hány különböző háromszöget lehet összerakni!
// Pl: N=7, így 2 lehetséges. N=11, így 3 lehetséges.

#include <stdio.h>

int gyufaHaromszog(int n)
{

	if (n >= 3 && n <= 100) {
		int eredmeny;
			eredmeny = n/3.0;
			return eredmeny;
	}

	else {
		return 0;
	}
		

}

int main (void) 
{
	int n;
	printf("Hány gyufaszálad van?: ");
	scanf("%d", &n);

	if (gyufaHaromszog(n) == 0) {
		printf("Háromnál több vagy száznál kevesebb gyufád lehet csak!");
	}

	else {
		printf("%d darab gyufaszálból %d háromszöget tudsz kirakni.", n, gyufaHaromszog(n));
		return 0;

	}
}
