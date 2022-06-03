#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp,*fpout;
	fp=fopen("prova.txt","r");
	fpout=fopen("output.txt","w");
	if (fp==NULL){
		perror("errore apertura file");
		exit(1);
	}
	
	char car[80];
	int i;
	fgets(car,80,fp);
	for(i=0;i<strlen(car);i++){
		if(car[i]=='e' && car[i+1]=='f' && car[i+2]=='f' && car[i+3]=='e'){
			fprintf(fpout,"f");
			i+=3;
		}else
			fprintf(fpout,"%c",car[i]);
	}	
	
	fclose(fp);
	fclose(fpout);
	
	return 0;
}
