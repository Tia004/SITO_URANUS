#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void carica(int []);
void visualizza(int []);
void bubble(int [],int,int);

int main(){
	int v[DIM],i,max,min,pmax=0,pmin=0;
	carica(v);
	visualizza(v);
	max=v[0];
	min=v[0];
	for(i=1;i<DIM;i++){
		if(v[i]>max){
			max=v[i];
			pmax=i;
		}else if(v[i]<min){
			min=v[i];
			pmin=i;
		}
	}
	printf("Max: %d (%d)\nMin: %d (%d)\n",max,pmax,min,pmin);
	bubble(v,pmax,pmin);
	visualizza(v);
	return 0;
}

void carica(int v[DIM]){
	int i;
	srand(time(NULL));
	for(i=0;i<DIM;i++){
		v[i]=rand()%40+10;
	}
}

void visualizza(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("%3d",v[i]);
	}
	putchar('\n');
}
void bubble(int v[DIM],int pmax,int pmin){
	int i,j,box;
	if(pmin<pmax){
		for(i=0;i<DIM;i++){
			for(j=i+1;j<DIM;j++){
				if(v[j]<v[i]){
					box=v[j];
					v[j]=v[i];
					v[i]=box;
				}
			}
		}
	}else{
		for(i=0;i<DIM;i++){
			for(j=i+1;j<DIM;j++){
				if(v[j]>v[i]){
					box=v[j];
					v[j]=v[i];
					v[i]=box;
				}
			}
		}
	}
}

