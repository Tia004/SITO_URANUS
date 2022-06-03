#include <stdio.h>
#define DIM 80

int my_strcmp(char [],char []);

int main(){
	char s1[DIM],s2[DIM];
	printf("Stringa 1: ");
	gets(s1);
	fflush(stdin);
	printf("Stringa 2: ");
	gets(s2);
	fflush(stdin);
	if(my_strcmp(s1,s2)==0)
		printf("%s = %s",s1,s2);
	else if(my_strcmp(s1,s2)>0)
		printf("%s > %s",s1,s2);
		else
			printf("%s < %s",s1,s2);
	return 0;
}

int my_strncmp(char s1[DIM],char s2[DIM]){
	int i,count1,count2;
	count1=count2=0;
	for(i=0;s1[i]!='\0';i++){
		count1+=s1[i];
	}
	for(i=0;s2[i]!='\0';i++){
		count2+=s2[i];
	}
	if(count1>count2){
		return (count1-count2);
	}else if(count2>count1){
		return -(count2-count1);
	}else{
		return 0;
	}
}
