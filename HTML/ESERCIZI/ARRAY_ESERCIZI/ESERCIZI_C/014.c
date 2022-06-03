#include<stdio.h>
#define DIM 10

int main()
{
	int m[DIM][DIM],i,j,temp=0;
	srand(time(NULL));
	//caricamento
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
		m[i][j]=rand()%100+1;		
		}
	}
	//visualizzazione
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
		printf("%4d",m[i][j]);		
		}
		putchar('\n');
	}
	putchar('\n');
	//visualizzazione righe invertite
	for(i=0;i<DIM;i=i+2){
		for(j=0;j<DIM;j++){
				temp=m[i][j];
				m[i][j]=m[i+1][j];
				m[i+1][j]=temp;
		}
		putchar('\n');
	}
	
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
		printf("%4d",m[i][j]);		
		}
		putchar('\n');
	}
	
	return 0;
}
