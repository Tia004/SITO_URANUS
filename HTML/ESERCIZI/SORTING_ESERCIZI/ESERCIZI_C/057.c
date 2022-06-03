#include <stdio.h>
#define DIM 10

void space();
void switchcase(int,int [],int);
void carica(int []);
void visualizza(int []);
void bubble(int []);
void selection(int []);
void insertion(int []);

int main(){
	int c,v[DIM];
	printf("\tMENU\n");
	switchcase(c,v,0);
	return 0;
}

void switchcase(int c,int v[DIM],int flag){
	printf("\nInserisci comando numerico: ");
	scanf("%d",&c);
	putchar('\n');
	switch (c) {
		case 0:
			carica(v);
			flag++;
			switchcase(c,v,flag);
			break;
		case 1:
			if(flag!=0){
				visualizza(v);
			}else{
				printf("Errore! Vettore non caricato\n");
			}
			switchcase(c,v,flag);
			break;
		case 2:
			if(flag!=0){
				bubble(v);
			}else{
				printf("Errore! Vettore non caricato\n");
			}
			switchcase(c,v,flag);
			break;
		case 3:
			if(flag!=0){
				selection(v);
			}else{
				printf("Errore! Vettore non caricato\n");
			}
			switchcase(c,v,flag);
			break;
		case 4:
			if(flag!=0){
				insertion(v);
			}else{
				printf("Errore! Vettore non caricato\n");
			}
			switchcase(c,v,flag);
			break;
		case 5:
			printf("\t\tFINE");
			break;	
		default:
			printf("\n\t\tNON VALIDO");
		break;
	}
}

void carica(int v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("%d^ elemento: ",i+1);
		scanf("%d",&v[i]);
	}
	space();
}

void visualizza(int v[DIM]){
	int i;
	printf("Vettore: ");
	for(i=0;i<DIM;i++){
		printf("%3d",v[i]);
	}
	space();
}

void bubble(int v[DIM]){
	int i,j,box;
	for(i=0;i<DIM;i++){
		for(j=i+1;j<DIM;j++){
			if(v[i]>v[j]){
				box=v[i];
				v[i]=v[j];
				v[j]=box;
			}
		}
	}
	printf("Vettore ordinato con Bubble Sorting: ");
	for(i=0;i<DIM;i++){
		printf("%3d",v[i]);
	}
	space();
}

void selection(int v[DIM]){
	int i,j,imin,box;
	for(i=0;i<DIM;i++){
		imin=i;
		for(j=i+1;j<DIM;j++){
			if(v[j]<v[imin]){
				imin=j;
				if(imin!=i){
					box=v[i];
					v[i]=v[j];
					v[j]=box;	
				}
			}
		}
	}
	printf("Vettore ordinato con Selection Sorting: ");
	for(i=0;i<DIM;i++){
		printf("%3d",v[i]);
	}
	space();
}

void insertion(int v[DIM]){
	int i,j,box;
	for(i=0;i<DIM;i++){
		j=i;
		while(j>0 && v[j-1]>v[j]){
			box=v[j-1];
			v[j-1]=v[j];
			v[j]=box;
			j=j-1;
		}
	}
	printf("Vettore ordinato con Insertion Sorting: ");
	for(i=0;i<DIM;i++){
		printf("%3d",v[i]);
	}
	space();
}

void space(){
	printf("\n -----------------------------------------------------\n");
}


