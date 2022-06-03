#include<stdio.h>
#define ROW 8
#define COL 11

int main()
{
	int m[ROW][COL],i,j;
	
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			m[i][j]=i+j;
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++)
			printf("%3d",m[i][j]);
		putchar('\n');
	}
	
	return 0;
}
