#include <stdio.h>
#define DIM 10

int main()
{
	int v[DIM],i,s=0,max=0,min=99;
	srand(time(NULL)); 

	for(i=0;i<DIM;i++){
		v[i]=rand()%45+55;
		printf("%d\t",v[i]);
		s+=v[i];
	}
	max=v[0];
	for(i=1;i<DIM;i++)
	{
		if(v[i]>max)
			max=v[i];
		else if(v[i]<min)
			min=v[i];
	}

	printf("\n\nsomma = %d",s);
	printf("\nmassimo = %d",max);
	printf("\nminimo = %d",min);
	
	return 0;
}
