#include <stdio.h>
#include <string.h>
#define DIM 80

int ContaCifre(char []);

int main(){
	char s[80];
	int cifre;
	printf("Stringa: ");
	gets(s);
	fflush(stdin);
	printf("Cifre: %d",ContaCifre(s));
	return 0;
}

int ContaCifre(char s[DIM]){
	int i,c=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]>='0' && s[i]<='9'){
			c++;
		}
	}
	return c;
}
