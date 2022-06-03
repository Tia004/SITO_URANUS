#include<stdio.h>
#define DIM 10

int main()
{
	int v[DIM],i,box;
	
	for(i=0;i<DIM;i++)
		v[i]=i+1;
		
	box=v[DIM-1];
	for(i=0;i<DIM;i++){
		v[DIM-1-i]=v[DIM-2-i];
	}
	v[0]=box;
		
	for(i=0;i<DIM;i++)
		printf("%d\t",v[i]);
	
	return 0;
}
