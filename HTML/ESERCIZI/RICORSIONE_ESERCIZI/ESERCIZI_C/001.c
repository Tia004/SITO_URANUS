#include<stdio.h>
#include<stdlib.h>
int somma_pari(int);
int main() {
	int n = 0;
	do {
		printf("Inserire qunati numeri pari da 0 sommare: ");
		scanf("%d", &n);
		fflush(stdin);
	} while (n <= 0);
	printf("Somma primi %d numeri pari: %d", n, somma(n));
	return 0;
}
int somma(int n) {
	if (n == 0)
		return 0;
	else
		return (2 * n) + somma(n - 1);
}
