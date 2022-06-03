#include <stdio.h>
#include <string.h>
#define DIM 3
#define L 80

void strsort(char [DIM][L]);

int main(){
	char str[DIM][L];
	int i;
	for(i=0;i<DIM;i++){
		printf("%d^ stringa: ",i+1);
		gets(str[i]);
		fflush(stdin);
	}
	putchar('\n');
	strsort(str);
	for(i=0;i<DIM;i++){
		printf("%d^ stringa: %s\n",i+1,str[i]);
	}
	return 0;
}

void strsort(char str[DIM][L]){
	int i,j;
	char box[L];
	for(i=0;i<DIM;i++){
		for(j=i+1;j<DIM;j++){
			if(strlen(str[j])<strlen(str[i])){
				strcpy(box,str[j]);
				strcpy(str[j],str[i]);
				strcpy(str[i],box);
			}
		}
	}
}
