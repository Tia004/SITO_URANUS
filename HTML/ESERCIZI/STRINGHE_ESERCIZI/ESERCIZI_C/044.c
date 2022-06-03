#include <stdio.h>
#include <string.h>
#define DIM 80

int cerca(char [],char []);

int main(){
	char s1[DIM],s2[DIM];
	printf("Stringa 1: ");
	gets(s1);
	fflush(stdin);
	printf("Stringa 2: ");
	gets(s2);
	fflush(stdin);
	if(cerca(s1,s2)!=0){
		printf("\nIndice d'inizio di s2 in s1: %d ",cerca(s1,s2));
	}
	return 0;
}

int cerca(char s1[DIM],char s2[DIM]){
	int i,j,ctr;
	j=0;
	for(i=0;i<strlen(s1);i++){
		if(s1[i]==s2[j]){
			ctr=1;
			for(j=1;j<strlen(s2);j++){
				if(s1[i+j]==s2[j]){
					ctr++;
				}
			}
			if(ctr==strlen(s2)){
				return i;
			}
		}
	}
	return 0;
}
