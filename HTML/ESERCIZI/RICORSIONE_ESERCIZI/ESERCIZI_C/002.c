#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DIM 10

void carica(int []);
void visualizza(int []);
int max(int [], int, int);

int main()
{
	int v[DIM];
	srand(time(NULL));
	
	carica(v);
	visualizza(v);
	printf("numero massimo = %d",max(v,v[0],DIM-1));
	
	return 0;
}

void carica(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++)
		v[i]=rand()%99+1;
}
void visualizza(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++)
		printf("%d\t",v[i]);
	putchar('\n');
}
int max(int v[DIM], int maxx, int i){
	if(i==0){
		return maxx;
	}else{
		if(v[i]>maxx)
			return max(v, v[i], i-1);
		else
			return max(v, maxx, i-1);
	}
}
