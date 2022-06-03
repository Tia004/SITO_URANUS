#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	int c=0;
	char car;
	fp=fopen("numeri.num","r");
	if(fp==NULL){
		perror("error: ");
		exit(1);
	}
	while((car=fgetc(fp))!=EOF)
		if(car>='0' && car<='9')
			c++;
	fclose(fp);
	fp=fopen("numeri.num","a");
	fseek(fp,0,SEEK_END);
	fprintf(fp,"%d",c);
	return 0;
}
