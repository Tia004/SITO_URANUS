#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void vettore(int);
void matrice(int, int);

int main()
{
	int row,col;
	srand(time(NULL));
	printf("Inserisci la grandezza del vettore: ");
	scanf("%d",&row);
	fflush(stdin);
	vettore(row);
	printf("\n\n\nInserisci le righe della matrice: ");
	scanf("%d",&row);
	fflush(stdin);
	printf("Inserisci le colonne della matrice: ");
	scanf("%d",&col);
	fflush(stdin);
	matrice(row,col);
	
	return 0;
}

void vettore(int row){
	int v[row],*pv,i,max;
	pv=&v[0];
	
	for(i=0;i<row;i++)
		*(pv+i)=rand()%99+1;
	putchar('\n');
	for(i=0;i<row;i++)
		printf("%4d ",*(pv+i));
	max=*(pv+0);
	for(i=1;i<row;i++)
		if(*(pv+i)>max)
			max=*(pv+i);
	printf("\n\nMax = %d",max);
}
void matrice(int row, int col){
	int m[row][col],*pm,i,j,max;
	pm=&m[0][0];
	
	for(i=0;i<row*col;i++)
		*(pm+i)=rand()%99+1;
	j=0;
	putchar('\n');
	for(i=0;i<row*col;i++){
		printf("%4d ",*(pm+i));
		j++;
		if(j==col){
			j=0;
			putchar('\n');
		}
	}
	max=*(pm+0);
	for(i=1;i<row*col;i++)
		if(*(pm+i)>max)
			max=*(pm+i);
	printf("\nMax = %d",max);
}

