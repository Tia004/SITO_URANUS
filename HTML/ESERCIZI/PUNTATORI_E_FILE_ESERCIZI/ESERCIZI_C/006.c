#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	char car,buffer[100];
	int c=0,i;
	fp=fopen("ricordi.old","r+");
	if(fp==NULL){
		perror("error: ");
		exit(1);
	}
	for(i=0;(car=fgetc(fp))!=EOF;i++)
		buffer[i]=car;
	buffer[i+1]='\0';
	for(i=0;buffer[i]!='\0';i++){
		if(buffer[i]=='.'){
			if(buffer[i+1]=='\n'){
				fseek(fp,c+4,0);
				if(buffer[i+2]>='a' && buffer[i+2]<='z')
					fprintf(fp,"%c",buffer[i+2]-32);
				c++;
			}
		}
		c++;
	}
	fclose(fp);
	return 0;
}
