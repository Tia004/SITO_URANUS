#include <stdio.h>
#include <string.h>

int my_strlen(char[]);

int main(){
	int l,i;
	char s[]="albero";
	puts(s);
	printf("Lunghezza stringa: %d",my_strlen(s));
	return 0;
}

int my_strlen(char s[]){
	int l=0,i;
	for(i=0;s[i]!='\0';i++){
		l++;
	}
	return l;	
}
