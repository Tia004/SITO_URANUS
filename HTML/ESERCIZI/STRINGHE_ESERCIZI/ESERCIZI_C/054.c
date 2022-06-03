#include <stdio.h>
#include <string.h>
#define DIM 80
typedef char string;

void sorting(string []);

int main(){
	string s1[DIM],s2[DIM];
	int i,j=0;
	printf("Stringa: ");
	gets(s1);
	fflush(stdin);
	for(i=0;i<strlen(s1);i++){
        if(s1[i]!=' '){
            s2[j]=s1[i];
            j++;
        }
	}
	printf("\nSenza spazi: ");
	puts(s2);
	for(i=0;i<strlen(s2);i++){
        if(s2[i]>=65 && s2[i]<=90){
        	s2[i]+=32;
		}
	}
	printf("\nMinuscolo: ");
	puts(s2);
	sorting(s2);
	printf("\nOrdinato: ");
	puts(s2);
	return 0;
}

void sorting(string s[]){
    int i,j,temp;
    for(i=0; i<strlen(s); i++){
        for(j=i+1; j<strlen(s); j++){
            if(s[i]>s[j]){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
}

