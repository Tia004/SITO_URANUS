#include <stdio.h>
#include <string.h>
#define L 50

void my_strcat(char[],char[]);

int main(){
	int i;
	char s1[L]="ciao";
	char s2[L]="salve";
	puts(s1);
	puts(s2);
	my_strcat(s1,s2);
	puts(s1);
	return 0;
}

void my_strcat(char s1[],char s2[]){
	int i,len;
	len=strlen(s1);
	for(i=0;s2[i]!='\0';i++){
		s1[len+i]=s2[i];
	}
}
