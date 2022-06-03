#include <stdio.h>
#include <string.h>
#define DIM 5
#define L 80

int confronta(char s[DIM][L]);

int main(){
	char s[DIM][L];
	int i;
	for(i=0;i<DIM;i++){
		printf("%d^ stringa: ",i+1);
		gets(s[i]);
		fflush(stdin);
	}
	printf("\n\nNumero stringhe uguali: %d",confronta(s));
	return 0;
}

int confronta(char s[DIM][L]){
	int i,c,n=0;
	for(i=0;i<DIM;i++){
		for(c=0;c<i;c++){
			if(strcmp(s[i],s[c])==0){
				n++;
			}
		}
	}
	return n;
}
