#include <stdio.h>
#define DIM 30

void rettangolo(int,int);

int main(){
	int row,col;
	printf("Row: ");
	scanf("%d",&row);
	fflush(stdin);
	printf("Col: ");
	scanf("%d",&col);
	fflush(stdin);
	rettangolo(row,col);
	return 0;
}

void rettangolo(int row,int col){
	int i,j;
	putchar('\n');
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf(" * ");
		}
		putchar('\n');
	}
}
