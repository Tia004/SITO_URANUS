#include<stdio.h>
#define DIM 10 

void azzera(int [][DIM]);
void visualizza(int [][DIM]);
void cornice(int [][DIM]);

int main()
{
	int m[DIM][DIM];
	azzera(m);
	visualizza(m);
	cornice(m);
	visualizza(m);
	return 0;
}

void azzera(int m[][DIM]){
	int i,j;
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			m[i][j]=0;
		}
	}
}

void visualizza(int m[][DIM]){
	int i,j;
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("%3d",m[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	putchar('\n');
}
void cornice(int m[][DIM]){
	int i;
	for(i=0;i<DIM-1;i++){
		m[0][i]=i+1;
		m[i][DIM-1]=i+DIM; //m[0][i]+9;
		m[DIM-1][DIM-(i+1)]=i+DIM+(DIM-1); //m[i][DIM-1]+9;
		m[DIM-(i+1)][0]=i+DIM+(DIM-1)+(DIM-1); //m[DIM-1][DIM-(i+1)]+9;
		
	}
}
