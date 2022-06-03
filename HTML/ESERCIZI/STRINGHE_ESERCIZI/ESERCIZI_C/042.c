#include <stdio.h>
#define DIM 80

int my_strlen(char []);

int main(){
	char s[DIM]="";
	printf("Stringa: ");
	gets(s);
	fflush(stdin);
	printf("Lunghezza: %d",my_strlen(s));
	return 0;
}

int my_strlen(char s[DIM]){
	int i,c=0;
	for(i=0;s[i]!='\0';i++)
		c++;
	return c;
}
