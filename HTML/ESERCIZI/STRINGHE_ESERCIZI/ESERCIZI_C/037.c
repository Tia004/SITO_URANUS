#include <stdio.h>
#define DIM 80

void my_strcpy(char [],char []);

int main(){
	char s1[DIM],s2[DIM];
	printf("Stringa 1: ");
	gets(s1);
	fflush(stdin);
	my_strcpy(s2,s1);
	printf("Stringa 2: ");
	puts(s2);
	return 0;
}

void my_strcpy(char s2[DIM],char s1[DIM]){
	int i;
	for(i=0;i<sizeof(s1)-1;i++){
		s2[i]=s1[i];
	}
	s2[i]='\0';
}
