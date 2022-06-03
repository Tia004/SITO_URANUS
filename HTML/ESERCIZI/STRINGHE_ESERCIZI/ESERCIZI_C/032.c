#include <stdio.h>
#include <string.h>
#define L 50

int main(){
	int i,,n=0,c=0;
	char s1[L],s2[L];
	printf("Stringa: ");
	gets(s1);
	fflush(stdin);
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i]!='A'&&s1[i]!='E'&&s1[i]!='I'&&s1[i]!='O'&&s1[i]!='U'){
			c++;
		}
	}
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i]!='A'&&s1[i]!='E'&&s1[i]!='I'&&s1[i]!='O'&&s1[i]!='U'){
			s2[i]=s1[i];
		}else{
			s2[c+n]=s1[i];
			n++;
		}
	}
	return 0;
}
