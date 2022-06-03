#include<stdio.h>
#define DIM 15

int main()
{
	int v[DIM],i,j,c=1,cd=0,flag=0;
	for(i=0;i<DIM;i++){ 
		flag=0;
		do{
			cd=0;
			for(j=2;j<=c;j++)
				if(c%j==0)
					cd++;
			if(cd==1){
				v[i]=c;
				flag=1;
			}
			c++;
		}while(flag==0);
	}
	for(i=0;i<DIM;i++)
		printf("%4d",v[i]);
	
	return 0;
}
