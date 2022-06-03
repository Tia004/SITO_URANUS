#include <stdio.h>

long int potenza();

int main(){
	int n1,n2;
	long int p;
	printf("n1: ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("n2: ");
	scanf("%d",&n2);
	fflush(stdin);
	p=potenza(n1,n2);
	printf("%d^%d = %li",n1,n2,p);
	return 0;
}

long int potenza(int n1,int n2){
	int i,p=1;
	for(i=1;i<=n2;i++){
		p=p*n1;
	}
	return p;
}
