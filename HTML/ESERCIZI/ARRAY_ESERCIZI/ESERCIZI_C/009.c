#include<stdio.h>
#define DIM 10

int main()
{
	int m[DIM][DIM],i,j;
	srand(time(NULL));
	
	for(i=0;i<DIM;i++)
		for(j=0;j<DIM;j++)
			m[i][j]=rand()%9+1;
	for(i=0;i<DIM;i++)
		for(j=0;j<DIM;j++)
			if(j<i)
				m[i][j]=0;
	
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++)
			printf("%2d",m[i][j]);
		putchar('\n');
	}
	return 0;
}
