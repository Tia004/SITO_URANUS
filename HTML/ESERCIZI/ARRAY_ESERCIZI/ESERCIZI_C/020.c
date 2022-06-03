#include <stdio.h>
#define DIM 10

void carica(int [][DIM]);
void visualizzaframe(int [][DIM]);

int main(){
	int m[DIM][DIM];
	carica(m);
	visualizzaframe(m);
	return 0;
}

void carica(int m[][DIM]){
	int i,j,c=1;
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++)
			m[i][j]=0;
	}
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			m[i][j]+=c;
			c++;
		}
	}
}

void visualizzaframe(int m[][DIM]){
    int i,j,c;
    for(i=0;i<DIM;i++){
            printf(" ---");
    }
    putchar('\n');
    for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("|%3d", m[i][j]);
		}
    	putchar('|');
		putchar('\n');
		for(c=0;c<DIM;c++){
            printf(" ---");
    	}
		putchar('\n');
	}
}

