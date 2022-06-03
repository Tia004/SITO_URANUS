#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void carica(int []);
void caricamax(int [],int [],int []);
void visualizzaframe(int []);

int main(){
	int v[DIM],v2[DIM],v3[DIM];
	srand(time(NULL));
	carica(v);
	carica(v2);
	caricamax(v,v2,v3);
	visualizzaframe(v);
	visualizzaframe(v2);
	visualizzaframe(v3);
	return 0;
}

void carica(int v[]){
	int i;
	for(i=0;i<DIM;i++)
		v[i]=rand()%100+1;
}

void caricamax(int v[],int v2[],int v3[]){
	int i;
	for(i=0;i<DIM;i++){
		if(v[i]>=v2[i]){
			v3[i]=v[i];
		}else
		{
			v3[i]=v2[i];
		}
	}
}

void visualizzaframe(int v[]){
    int i;
    printf("  ---");
    for(i=1;i<DIM;i++){
            printf(" ---");
    }
    printf("\n ");
    for(i=0; i<DIM; i++){
		printf("|%3d", v[i]);
    }
    printf("|\n ");
    for(i=0;i<DIM;i++){
        printf(" ---");
    }
    putchar('\n');
}
