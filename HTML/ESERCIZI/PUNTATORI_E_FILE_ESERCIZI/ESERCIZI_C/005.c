#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int n,c=0;
	fp=fopen("numeri.txt","r");
	if(fp==NULL){
		perror("error: ");
		exit(1);
	}
	while(fscanf(fp,"%d",&n)!=EOF)
		c++;
	printf("ci sono %d cifre",c);
	fclose(fp);
	return 0;
}

