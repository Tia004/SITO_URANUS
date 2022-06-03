#include <stdio.h>
#define DIM 10

int main()
{
	int v[DIM],i,max=0,min=100,pmin=0,pmax=0,p=1,c=1;
	srand(time(NULL)); 

	for(i=0;i<DIM;i++){
		v[i]=rand()%99+1;
		printf("%3d ",v[i]);
		if(v[i]>max){
			max=v[i];
			pmax=p;
		}else
			if(v[i]<min){
				min=v[i];
				pmin=p;
			}
		p++;
	}
	putchar('\n');
	for(i=0;i<DIM;i++){
		if(pmin==c){
			v[i]=max;
			printf("%3d ",v[i]);
		}else{
			if(pmax==c){
				v[i]=min;
				printf("%3d ",v[i]);
			}else
				printf("%3d ",v[i]);
		}
		c++;
	}
	
	return 0;
}
