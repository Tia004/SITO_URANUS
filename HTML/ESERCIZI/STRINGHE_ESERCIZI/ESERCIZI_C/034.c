#include <stdio.h>
#include <string.h>

int vocali(char []);

int main(){
	int i,v=0;
	char s[]="ciao come va";
	puts(s);
	printf("Le vocali sono %d",vocali(s));
	return 0;
}

int vocali(char s[]){
	int i,v=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
			v++;
		}
	}
	return v;
}
