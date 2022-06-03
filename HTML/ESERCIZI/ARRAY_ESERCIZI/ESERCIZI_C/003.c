#include<stdio.h>
#include<math.h>
#define DIM 10
#define MAX 101

int main()
{
	int v[DIM],i,k,p=MAX,c=1,cf=0,s=0,ps=MAX;
	srand(time(NULL)); 

	printf("inserisci il numero: ");
	scanf("%d",&k);
	fflush(stdin);
	for(i=0;i<DIM;i++){ 		//caricamento e visualizzazione
		v[i]=rand()%100+1;
		printf("%d  ",v[i]);
	}
	for(i=0;i<DIM;i++){
		s=k-v[i];				//sottrazione che determina quanto v[i] sia vicino a k
		s=abs(s);				//assoluto che determina che s sia sempre positivo, in modo che conti sia i numeri maggiori e minori di k 
		if(s<ps){				//se s < dell'attuale sottrazione assoluta del numero più vicino a k
			ps=s;				//la sottrazione assoluta del numero più vicino a k diventa s
			p=v[i];				//il numero più vicino a k diventa il vettore
			cf=c;				//contatore finale a cui viene assegnato il valore della posizione del vettore
		}
		c++;					//contatore che aumenta ogni volta
	}
	if(p==MAX)
		printf("\n\nERRORE");
	else
		printf("\nl'elemento  di v  piu' prossimo a %d e' %d e si trova in posizione %d",k,p,cf);
	
	return 0;
}
