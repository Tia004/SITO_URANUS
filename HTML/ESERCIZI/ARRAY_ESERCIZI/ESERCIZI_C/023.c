#include<stdio.h>
#include<string.h>
#define DIM 10

struct alunni{
	char nome[80];
	char cognome[80];
	int voto_con;
	int voto_inf;
};

void inserimento(struct alunni []);
void m_con(struct alunni []);
void m_inf(struct alunni []);
void visualizza(struct alunni []);

int main()
{
	struct alunni v[DIM];
	int scelta;
	
	while(1){
		printf("1. inserimento dati\n2. modificare il voto di condotta\n3. aumentare o decrementare il voto di info\n4. visualizza\n0. escape");
		printf("\nscelta: ");
		scanf("%d",&scelta);
		fflush(stdin);
		switch(scelta){
			case 1:
				inserimento(v);
				putchar('\n');
				break;
			case 2:
				m_con(v);
				putchar('\n');
				break;
			case 3:
				m_inf(v);
				putchar('\n');
				break;
			case 4:
				visualizza(v);
				putchar('\n');
				break;
			case 0:
				return 0;
				break;
			default:
				printf("scelta non valida");
				putchar('\n');
				break;
		}	
	}
	return 0;
}

void inserimento(struct alunni v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("\n%d alunno:",i+1);
		printf("\ninserisci il nome: ");
		gets(v[i].nome);
		fflush(stdin);
		printf("inserisci il cognome: ");
		gets(v[i].cognome);
		fflush(stdin);
		do{
			printf("inserisci il voto di condotta: ");
			scanf("%d",&v[i].voto_con);
			fflush(stdin);
		}while(v[i].voto_con<1 || v[i].voto_con>10);
		do{
		printf("inserisci il voto di informatica: ");
		scanf("%d",&v[i].voto_inf);
		fflush(stdin);
		}while(v[i].voto_inf<1 || v[i].voto_inf>10);
	}
}
void m_con(struct alunni v[DIM]){
	int i;
	char nome[80],cognome[80];
	printf("\ninserisci il nome: ");
	gets(nome);
	fflush(stdin);
	printf("inserisci il cognome: ");
	gets(cognome);
	fflush(stdin);
	for(i=0;i<DIM;i++){
		if(strcmp(v[i].nome,nome)==0){
			if(strcmp(v[i].cognome,cognome)==0){
				do{
					printf("inserisci il nuovo voto di condotta: ");
					scanf("%d",&v[i].voto_con);
					fflush(stdin);
				}while(v[i].voto_con<1 || v[i].voto_con>10);
			}
		}
	}
}
void m_inf(struct alunni v[DIM]){
	int i,sc;
	printf("1. incrementare i voti\n2. decrementare i voti");
	printf("\nscelta: ");
	scanf("%d",&sc);
	fflush(stdin);
	switch(sc){
		case 1:
			for(i=0;i<DIM;i++){
				if(v[i].voto_inf<=9)
					v[i].voto_inf++;
			}
			break;
		case 2:
			for(i=0;i<DIM;i++){
				if(v[i].voto_inf>=2)
					v[i].voto_inf--;
			}
			break;
		default:
			printf("scelta non valida");
			putchar('\n');
			break;
	}	
}

void visualizza(struct alunni v[DIM]){
	int i;
	for(i=0;i<DIM;i++){
		printf("\nnome = ");
		puts(v[i].nome);
		printf("cognome = ");
		puts(v[i].cognome);
		printf("voto condotta = %d",v[i].voto_con);
		printf("\nvoto informatica = %d",v[i].voto_inf);
		putchar('\n');
	}
}
