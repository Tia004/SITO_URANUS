#include<stdio.h>
#define DIM 10

int main()
{
	char v[]={'P','R','O','V','A'},v2[]={'E','S','A','M','E'},
	w[DIM],i,c=0;
	
	for(i=0;i<DIM/2;i++){
			w[i]=v[i];
	}
	for(i=5;i<DIM;i++){
			w[i]=v2[c];
			c++;
	}

	for(i=0;i<DIM/2;i++){
		printf("%c",v[i]);
	}
	putchar('\n');
	for(i=0;i<DIM/2;i++){
		printf("%c",v2[i]);
	}
	putchar('\n');
	for(i=0;i<DIM;i++){
		printf("%c",w[i]);
	}	

	return 0;
}
