#include <stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fpout;
	fp=fopen("prova.txt","r");
	fpout=fopen("output.txt","w");
	if (fp==NULL){
		perror("errore apertura file");
		exit(1);
	}
	char car,str[]="effe";
	while((car=fgetc(fp))!=EOF){	
		if(car=='f')
			fputs(str,fpout);
		else
			fputc(car,fpout);
	}
	fclose(fp);
	fclose(fpout);
	
	return 0;
}
