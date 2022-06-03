/*220118_061_Rastelli_Francesco.c
61> Eseguire una ricerca binaria su un array v dimensionato DIM=10.
Inserire un valore esternamente e trovare se appartiene o meno a v.*/
#include<stdio.h>
#include<time.h>
#define DIM 10
void bubbleSort(int []);
void caricaV(int []);
void visualizzaV(int []);
int ricerca(int [], int);
int main(){
	int v[DIM], n, nr=-1;
	caricaV(v);
	visualizzaV(v);
	bubbleSort(v);
	visualizzaV(v);
	printf("Ricerca del Numero: ");
	scanf("%d", &n);
	fflush(stdin);
	nr=ricerca(v, n);
	if(nr!=-1)
		printf("%d nella posizione %d", n, nr+1);
	else
		printf("%d Non trovato!!", n);
	return 0;
}
void caricaV(int v[DIM]){
	int i;
	srand(time(NULL));
	for(i=0;i<DIM;i++)
		v[i]=rand()%100+0;
}
void visualizzaV(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("%2d ", v[i]);
	}
	putchar('\n');
}
void bubbleSort(int v[DIM]){
	int n, last, i, temp;
	n=DIM-1;
	last=n;
	while(last>0){
		last=0;
		for(i=0;i<n;i++){
			if(v[i]>v[i+1]){
				temp=v[i];
				v[i]=v[i+1];
				v[i+1]=temp;
				last=i;
			}
		}
		n=last;
	}
}
int ricerca(int v[DIM], int n){
	int p, u, m;
	p=0;
	u=DIM-1;
	while(p<=u){
		m=(p+u)/2;
		if(v[m]==n){
			return m;
		}else if(n>v[m]){
			p=m+1;
		}else{
			u=m-1;
		}
	}
	return -1;
}
		
