#include <stdio.h>
#define DIM 80

void my_strcat(char [],char []);

int main(){
	char s1[DIM*2], s2[DIM];
	printf("Stringa 1: ");
	gets(s1);
	fflush(stdin);
	printf("Stringa 2: ");
	gets(s2);
	fflush(stdin);
	my_strcat(s1,s2);
	puts(s1);
	return 0;
}

void my_strcat(char s1[DIM*2],char s2[DIM]){
	int i,j=0;
	for(i=0;s2[j]!='\0';i++){
		if(j>0){
			s1[i]=s2[j];
			j++;
		}
		if(s1[i]=='\0'){
			s1[i]=s2[j];
			j++;
		}
	}
}
