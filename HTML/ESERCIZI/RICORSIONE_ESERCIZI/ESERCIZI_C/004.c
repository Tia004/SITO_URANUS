#include<stdio.h>
#include<stdlib.h>
#define DIM 10
void visualizza(int *, int);
int main() {
	int v[DIM]={1,2,3,4,5,6,7,8,9,10}, *p_v;
	p_v=&v[0];
	visualizza(p_v, DIM);
	return 0;
}
void visualizza(int *p_v, int n) {
	if (n!=0){
		printf("%d ", *p_v);
		visualizza(p_v+1, n-1);
	}
}
