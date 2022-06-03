#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 20

void visualizza(int []);
void carica(int []);

int main(){
	int v[DIM],i,j,box;
	carica(v);
	printf("Vettore: ");
	visualizza(v);
	for(i=0;i<DIM/2-1;i++){
		for(j=i+1;j<DIM/2;j++){
			if(v[j]<v[i]){
				box=v[j];
				v[j]=v[i];
				v[i]=box;
			}
		}
	}
	printf("Prima meta ordinata: ");
	for(i=0;i<DIM/2-1;i++){
		printf("%d  ",v[i]);
	}
	putchar('\n');
	for(i=DIM/2;i<DIM-1;i++){
		for(j=i+1;j<DIM;j++){
			if(v[j]<v[i]){
				box=v[j];
				v[j]=v[i];
				v[i]=box;
			}
		}
	}
	printf("Seconda meta ordinata: ");
	for(i=DIM/2;i<DIM-1;i++){
		printf("%d  ",v[i]);
	}
	putchar('\n');
	printf("Vettore ordinato: ");
	visualizza(v);
	return 0;
}

void visualizza(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("%d  ",v[i]);
	}
	putchar('\n');
}

void carica(int v[DIM]){
	int i;
	srand(time(NULL));
	for(i=0;i<DIM;i++){
		v[i]=rand()%100+1;
	}
}

