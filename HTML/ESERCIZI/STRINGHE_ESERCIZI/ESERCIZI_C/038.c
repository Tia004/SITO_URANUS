#include <stdio.h>
#define DIM 80

void my_strncpy(char [],char [],int);

int main(){
	char s1[DIM],s2[DIM];
	int n;
	printf("Stringa 1: ");
	gets(s1);
	fflush(stdin);
	printf("Numero: ");
	scanf("%d",&n);
	fflush(stdin);
	my_strncpy(s2,s1,n);
	printf("Stringa 2: ");
	puts(s2);
	return 0;
}

void my_strncpy(char s2[DIM],char s1[DIM],int n){
	int i;
	for(i=0;i<n;i++){
		s2[i]=s1[i];
	}
	s2[i]='\0';
}
