#include<stdio.h>
#define DIM 10
#define DIM2 20

int main()
{
	int v[DIM],V[DIM2],i,j,c=10,cd=0;
	srand(time(NULL));
	//caricamento
	for(i=0;i<DIM;i++){
		v[i]=rand()%9+1;
	}
	//visualizzazione
	for(i=0;i<DIM;i++){
		printf("%d\t",v[i]);
	}
	putchar('\n');
	//caricamento numeri primi
	for(i=0;i<DIM;i++){
		cd=0;
		for(j=2;j<v[i];j++){
			if(v[i]%j==0)
			{
				cd++;
			}
		}
		if(cd==0)
		{
			V[c]=v[i];
			c++;
		}
	}
	//caricamento numeri non primi
	for(i=0;i<DIM;i++){
		cd=0;
		for(j=2;j<v[i];j++){
			if(v[i]%j==0)
			{
				cd++;
			}
		}
		if(cd>=1)
		{
			V[c]=v[i];
			c++;
		}
	}
	//visualizzazione con prima numeri primi
	for(c=10;c<DIM2;c++){
		printf("%d\t",V[c]);
	}
	
	return 0;
}
