#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fi,*fo;
	char car;
	fi=fopen("prova.txt","r");
	fo=fopen("provacopy.txt","w");
	if(fi==NULL){
		perror("error: ");
		exit(1);
	}
	while((car=fgetc(fi))!=EOF)
		fprintf(fo,"%c",car);
	fclose(fi);
	fclose(fo);
	return 0;
}
