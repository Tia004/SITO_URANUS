#include<stdio.h>
#define DIM 5

int main()
{
	int v[DIM],i,n;
	
	printf("inserisci un numero di 5 cifre: ");
	scanf("%d",&n);
	fflush(stdin);
	for(i=DIM-1;n>0;i--){
		v[i]=n%10;
		n=n-v[i];
		n=n/10;
	}
	for(i=0;i<DIM;i++)
		printf("%d\t",v[i]);
	
	return 0;
}
