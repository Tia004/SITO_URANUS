#include<stdio.h>
#define DIM 10

int main()
{
	int v[DIM],i,n,c=0;
	srand(time(NULL));
	//caricamento
	for(i=0;i<DIM;i++){
		v[i]=rand()%100+1;		
	}
	//visualizzazione
	for(i=0;i<DIM;i++){
		printf("%d\t",v[i]);		
	}
	putchar('\n');
	//inserimento numero
	do{
		printf("inserisci un numero: ");
		scanf("%d",&n);
		fflush(stdin);
	}while(n<=0);
	//controllo di quante volte è ripetuto
	for(i=0;i<DIM;i++){
		if(v[i]==n)
		{
			c++;
		}
	}
	
	printf("\nil numero %d compare %d volte",n,c);
	
	return 0;
}
