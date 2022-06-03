#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f1,*f2,*fa;
	char car;
	f1=fopen("file1.txt","r");
	f2=fopen("file2.txt","r");
	fa=fopen("fileall.txt","a");
	if(f1==NULL || f2==NULL){
		perror("error: ");
		exit(1);
	}
	while((car=fgetc(f1))!=EOF)
		fprintf(fa,"%c",car);
	while((car=fgetc(f2))!=EOF)
		fprintf(fa,"%c",car);
	fclose(f1);
	fclose(f2);
	fclose(fa);	
	return 0;
}
