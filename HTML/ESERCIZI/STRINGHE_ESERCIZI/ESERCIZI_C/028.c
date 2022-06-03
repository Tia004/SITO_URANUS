#include <stdio.h>
#include <string.h>

void my_strcpy(char[], char[]);

int main(){
	int i;
	char s2[]="marco";
	char s1[strlen(s2)];
	my_strcpy(s1,s2);
	puts(s1);
	puts(s2);
	return 0;
}

void my_strcpy(char s1[],char s2[]){
	int i;
	for(i=0;i<=strlen(s2);i++){
		s1[i]=s2[i];
	}
}


