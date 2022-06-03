#include <stdio.h>
#define DIM 10

int main()
{
	int i,j,c=0;
	char let[DIM];
	char vocali[]={'A','E','I','O','U'};
	srand(time(NULL));
	
	for(i=0;i<DIM;i++){
		let[i]=rand()%26+65;
		printf("%c	",let[i]);
	}
	for(i=0;i<DIM;i++)
		for(j=0;j<(sizeof(vocali)/sizeof(char));j++)
			if(let[i]==vocali[j])
				c++;
	printf("\n\nvocali = %d",c);
		
	return 0;
}
