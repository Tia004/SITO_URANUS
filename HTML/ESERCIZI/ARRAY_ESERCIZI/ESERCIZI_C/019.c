#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void carica(int []);
void scambia(int []);
void visualizza(int []);

int main(){
	int v[DIM];
	srand(time(NULL));
	carica(v);
	visualizza(v);
	scambia(v);
	visualizza(v);
	return 0;
}

void carica(int v[]){
	int i;
	for(i=0;i<DIM;i++)
		v[i]=rand()%90+10;
}

void scambia(int v[]){
	int i,temp;
	for(i=0;i<DIM;i+=2){
		temp=v[i];
		v[i]=v[i+1];
		v[i+1]=temp;
	}
}

void visualizza(int v[]){
    int i;
    for(i=0; i<DIM; i++){
		printf("%d\t",v[i]);
    }
    putchar('\n');
}
