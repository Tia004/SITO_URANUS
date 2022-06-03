#include<stdio.h>
#include<stdlib.h>
#define DIM 10
int ricerca(int *, int, int);
int main() {
	int v[DIM]={1,2,3,4,5,6,7,8,9,10}, *p_v, c;
	p_v=&v[0];
	printf("Numero da Cercare: ");
	scanf("%d", &c);
	fflush(stdin);
	printf("Numero trovato: %d",ricerca(p_v, DIM, c));
	return 0;
}
int ricerca(int *p_v, int n, int c) {
	if (*p_v==c)
		return c;
	else if(n!=0)
		ricerca(p_v+1, n-1, c);
	else
		return -1;
}
