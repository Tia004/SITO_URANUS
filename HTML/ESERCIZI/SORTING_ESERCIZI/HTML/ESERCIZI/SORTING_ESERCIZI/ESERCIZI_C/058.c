#include <stdio.h>
#define DIM 10

void resetCounters(int,int);
void printCounters(int,int);
int incSwap(int);
int incComp(int);

int main(){
	int v1[]={10,23,7,26,47,21,78,91,11,39}, v2[]={10,23,7,26,47,21,78,91,11,39}, v3[]={10,23,7,26,47,21,78,91,11,39};
	int i,imin,j,box;
	int swap_count = 0;
	int comp_count = 0;
	for(i=0;i<DIM;i++){
		for(j=i+1;j<DIM;j++){
			comp_count=incComp(comp_count);
			if(v1[i]>v1[j]){
				box=v1[i];
				v1[i]=v1[j];
				v1[j]=box;
				swap_count=incSwap(swap_count);
			}
		}
	}
	printf("Bubble sorting\n");
	printCounters(swap_count,comp_count);
	resetCounters(swap_count,comp_count);
	for(i=0;i<DIM;i++){
		imin=i;
		for(j=i+1;j<DIM;j++){
			comp_count=incComp(comp_count);
			if(v2[j]<v2[imin]){
				imin=j;
				if(imin!=i){
					box=v2[i];
					v2[i]=v2[j];
					v2[j]=box;
					swap_count=incSwap(swap_count);	
				}
			}
		}
	}
	printf("\n\nInsertion Sorting\n");
	printCounters(swap_count,comp_count);
	resetCounters(swap_count,comp_count);
	for(i=0;i<DIM;i++){
		j=i;
		comp_count=incComp(comp_count);
		while(j>0 && v3[j-1]>v3[j]){
			box=v3[j-1];
			v3[j-1]=v3[j];
			v3[j]=box;
			swap_count=incSwap(swap_count);
			j=j-1;
		}
	}
	printf("\n\nSelection Sorting\n");
	printCounters(swap_count,comp_count);
	return 0;
}

int incSwap(int swap_count) { return swap_count++; }
int incComp(int comp_count) { return comp_count++; }

void resetCounters(int swap_count,int comp_count){
	swap_count = 0;
	comp_count = 0;
}
	
void printCounters(int swap_count,int comp_count){
	printf("Confronti effettuati: %d\n", comp_count);
	printf("Scambi effettuati: %d\n", swap_count);
}
