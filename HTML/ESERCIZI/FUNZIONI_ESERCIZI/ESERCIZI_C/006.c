#include <stdio.h>
#include <string.h>
#define DIM 5
#define L 80

int CercaStringa();

int main(){
	char s[DIM][L],s1[L];
	int i;
	for(i=0;i<DIM;i++){
		printf("%d^ stringa: ",i+1);
		gets(s[i]);
		fflush(stdin); 
	}
	printf("\nstringa da cercare: ");
	gets(s1);
	fflush(stdin);
	if(CercaStringa(s,s1)==1){
		printf("\n\n\t\tla stringa esiste");
	}else{
		printf("\n\n\t\tla stringa non esiste");
	}
}

int CercaStringa(char s[DIM][L],char s1[L]){
	int i;
	for(i=0;i<DIM;i++){
		if(strcmp(s[i],s1)==0){
			return 1;
		}
	}
	return 0;
}
