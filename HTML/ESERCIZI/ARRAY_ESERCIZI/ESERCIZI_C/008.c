#include<stdio.h>
#define DIM 10

int main()
{
	int v[DIM],i,box;
	
	for(i=0;i<DIM;i++)
		v[i]=i+1;
		
	box=v[0];
	for(i=0;i<DIM;i++){
		v[i]=v[i+1];
	}
	v[DIM-1]=box;
		
	for(i=0;i<DIM;i++)
		printf("%d\t",v[i]);
		
	return 0;
}
