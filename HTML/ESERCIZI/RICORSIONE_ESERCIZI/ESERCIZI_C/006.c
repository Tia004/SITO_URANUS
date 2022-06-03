#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define DIM 20

void carica(int []);
void ordina(int []);
void visualizza(int []);
int ricerca(int [], int , int , int);

int main()
{
	int v[DIM];
	int n,pos;
	srand(time(NULL));
	
	carica(v);
	ordina(v);
	visualizza(v);
	printf("\ninserisci il numero da cercare: ");
	scanf("%d",&n);
	fflush(stdin);
	pos=ricerca(v,n,0,DIM-1);
	if(pos>0)
		printf("\nvalore %d si trova in posizione %d",n,pos);
	else
		printf("\nvalore %d non trovato",n,pos);
		
	return 0;
}
void carica(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++)
		v[i]=rand()%99+1;
}
void ordina(int v[DIM]){
	int i,j,box;
	for(i=0;i<DIM-1;i++){
		for(j=i+1;j<DIM;j++){
			if(v[i]>v[j]){
				box=v[i];
				v[i]=v[j];
				v[j]=box;
				
			}
		}
	}
}
void visualizza(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++)
		printf("%3d  ",v[i]);
	putchar('\n');
}
int ricerca(int v[DIM], int n, int i, int j){
	int m;
	if(i>j){
		return 0;
	}else{
		m=(i+j)/2;
		if(v[m]==n)  
			return m+1;
		else if (v[m]<n)
			ricerca(v,n,m+1,j);
		else
			ricerca(v,n,i,m-1);
	}	
}
