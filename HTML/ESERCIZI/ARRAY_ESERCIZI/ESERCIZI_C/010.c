#include<stdio.h>
#define ROW 5
#define COL 7

int main()
{
	int m[ROW][COL],i,j,s=0,max=0,c=0,pc=0;
	srand(time(NULL));
	
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			m[i][j]=rand()%99+1;

	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++)
			printf("%4d",m[i][j]);
		putchar('\n');
	}
	
	do{
		for(i=0;i<ROW;i++)
			s+=m[i][c];
		if(s>max || max==0){
			max=s;
			pc=c+1;
		}
		c++;
		s=0;
	}while(c<COL);
	putchar('\n');
	for(i=0;i<ROW;i++)
		printf("%d\n",m[i][pc-1]);

	putchar('\n');
	printf("Somma della colonna massima = %d\n",max);
	printf("Posizione della colonna con la somma massima = %d\n",pc);
}
