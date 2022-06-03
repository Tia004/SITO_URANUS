#include <stdio.h>
#define DIM 5

int main()
{
	int v[DIM],n,i,j;
	
	printf("inserisci il 1' numero: ");		//inserisco il primo numero
	scanf("%d",&v[0]);
	fflush(stdin);
	
	for(i=1;i<DIM;i++){
		printf("inserisci il %d' numero: ",i+1);		
		scanf("%d",&n);
		fflush(stdin);
		j=0;
		while(j<DIM){
			if(n==v[j]){
				printf("reinserisci il %d' numero: ",i+1);		
				scanf("%d",&n);
				fflush(stdin);
				j=0;
			}
			j++;
		}
		v[i]=n;
	}
	
	for(i=0;i<DIM;i++)		//visualizzazione
		printf("%d	",v[i]);
		
	return 0;
}
