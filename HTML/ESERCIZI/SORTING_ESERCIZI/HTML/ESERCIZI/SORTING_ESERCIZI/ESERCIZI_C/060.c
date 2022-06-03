/*220121_060_Rastelli_Francesco.c
60> Data una stringa s="Oggi ProVIAMO a VeDere chi Vince" caricata contestualmente estrarre solo le maiuscole e ordinarle in una seconda stringa s2 in modo discendente.
visualizzare s.
visualizzare s2.*/
#include<stdio.h>
#include<string.h>
#define L 80
void maiuscole(char [], char []);
void ordina(char []);
int main(){
	char s[]="Oggi ProVIAMO a VeDere chi Vince", s2[L];
	puts(s);
	maiuscole(s, s2);
	ordina(s2);
	puts(s2);
}
void maiuscole(char s[], char s2[]){
	int i, j=0;
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='A' && s[i]<='Z'){
			s2[j]=s[i];
			j++;
		}
	s2[j]='\0';
}
void ordina(char s2[]){
	int i, j;
	char min;
	for(i=1;s2[i]!='\0';i++){
		min=s2[i];
		j=i-1;
		while(min>s2[j] && j>=0){
			s2[j+1]=s2[j];
			j=j-1;
		}
		s2[j+1]=min;
	}
}
