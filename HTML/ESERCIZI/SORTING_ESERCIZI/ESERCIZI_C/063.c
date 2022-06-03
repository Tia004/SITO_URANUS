/*Dato un vettore numerico v dimensionato DIM=20 con caricamento random [1..9] 
visualizzare la cifra che presenta più occorrenze*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 20

int view_count(int []);

int main(){
	int i,v[DIM];
	for(i=0;i<DIM;i++){
		v[i]=rand()%9+1;
	}
	printf("Vettore: ");
	for(i=0;i<DIM;i++){
		printf("%3d",v[i]);
	}
	printf("\n\nLa cifra che presenta piu' occorrenze e' %d",v[view_count(v)]);
	return 0;
}

int view_count(int v[DIM]){
	int i,j,cmax=0;
	int c[DIM];
	for(i=0;i<DIM;i++){
		c[i]=1;
	}
	for(i=0;i<DIM;i++){
		for(j=i+1;j<DIM;j++){
			if(v[j]==v[i]){
				c[i]++;
			}
		}
	}
	for(i=0;i<DIM;i++){
		if(c[i]>cmax){
			cmax=c[i];
		}
	}
	for(i=0;i<DIM;i++){
		if(c[i]==cmax){
			return i;
		}
	}
	
}
