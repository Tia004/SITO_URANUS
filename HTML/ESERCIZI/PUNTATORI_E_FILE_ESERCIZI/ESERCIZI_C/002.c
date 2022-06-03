#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char car;
	fp=fopen("prova.txt","r");
	if(fp==NULL){
		perror("error: ");
		exit(1);
	}		
	while((car=fgetc(fp))!=EOF)
		printf("%c",car);
	fclose(fp);
	return 0;
}
