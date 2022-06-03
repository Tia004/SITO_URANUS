#include<stdio.h>
#define ROW 5
#define COL 7

int main()
{
	int m[ROW][COL],i,j,s=0,c=0,min=0,max=0,pcmax=0,pcmin=0,box;
	srand(time(NULL)); 

	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			m[i][j]=rand()%99+1;
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++)
			printf("%2d ",m[i][j]);
		putchar('\n');
	}

	do{
		for(i=0;i<ROW;i++)
			s=s+m[i][c];
		if(s>max || max==0){
			max=s;
			pcmax=c+1;
		}else if(s<min || min==0){
				min=s;
				pcmin=c+1;
		}
		c++;
		s=0;
	}while(c<COL);
	putchar('\n');
	printf("Somma della colonna massima = %d\n",max);
	printf("Posizione della colonna con la somma massima = %d\n",pcmax);
	printf("Somma della colonna minima = %d\n",min);
	printf("Posizione della colonna con la somma minima = %d\n",pcmin);
	putchar('\n');
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			if(j==(pcmax-1)){
				printf("%2d ",m[i][pcmin-1]);
			}else
			{
				if(j==(pcmin-1))
				{
					printf("%2d ",m[i][pcmax-1]);
				}else
				{
					printf("%2d ",m[i][j]);
				}
			}
		}
		putchar('\n');
	}
	
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++)
			printf("%2d ",m[i][j]);
		putchar('\n');
	}
	
	return 0;
}

