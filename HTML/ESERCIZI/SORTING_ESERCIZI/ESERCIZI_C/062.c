#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DIM 10

void visualizza(int [][DIM]);
void sorting_per_row(int [][DIM]);

int main(){
	int m[DIM][DIM];
	int i,j;
	srand(time(NULL));
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			m[i][j]=rand()%80+10;
		}
	}
	printf("Matrice:\n");
	visualizza(m);
	printf("Matrice ordinata:\n(righe pari -> decrescenti  |  righe dispari -> crescenti )\n");
	sorting_per_row(m);
	visualizza(m);
	return 0;
}

void visualizza(int m[DIM][DIM]){
	int i,j;
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("%3d",m[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
}

void sorting_per_row(int m[DIM][DIM]){
	int i,j,k1,k2,box;
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			if(i%2==1){
				for(k1=0;k1<DIM;k1++){
					for(k2=k1+1;k2<DIM;k2++){
						if(m[i][k2]>m[i][k1]){
							box=m[i][k2];
							m[i][k2]=m[i][k1];
							m[i][k1]=box;
						}
					}
				}
			}else{
				for(k1=0;k1<DIM;k1++){
					for(k2=k1+1;k2<DIM;k2++){
						if(m[i][k2]<m[i][k1]){
							box=m[i][k2];
							m[i][k2]=m[i][k1];
							m[i][k1]=box;
						}
					}
				}
			}
		}
	}
}
