#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char s1[]="marco";
	char s2[strlen(s1)];
	for(i=0;i<strlen(s1);i++){
		s2[i]=s1[strlen(s1)-1-i];
	}
	puts(s1);
	puts(s2);
	return 0;
}



