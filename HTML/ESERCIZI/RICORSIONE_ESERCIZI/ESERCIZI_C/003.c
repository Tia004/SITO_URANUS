#include<stdio.h>
#include<stdlib.h>
int somma_interi(int, int);
int main() {
	int n1, n2;
	printf("Inserire n1: ");
	scanf("%d", &n1);
	fflush(stdin);
	printf("Inserire n2: ");
	scanf("%d", &n2);
	fflush(stdin);
	printf("Somma numeri tra %d e %d: %d", n1, n2, somma_interi(n1, n2));
	return 0;
}
int somma_interi(int n1, int n2) {
	if (n1==n2)
		return 0;
	else
		return somma_interi(n1+1, n2)+n1;
}
