#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void inserimento(FILE *);
void modifica(FILE *);
void cancellazione(FILE *);
void ricerca(FILE *);
void visualizzazione(FILE *);

int main()
{
	FILE *fp;
	int scelta;
	while(1){
		printf("1. Inserimento\n2. Modifica\n3. Cancellazione\n4. Ricerca\n5. Visualizzazione\n0. Fine");
		printf("\n\nInserisci la tua scelta: ");
		scanf("%d",&scelta);
		fflush(stdin);
		switch(scelta){
			case 1:
				inserimento(fp);
				break;
			case 2:
				modifica(fp);
				break;
			case 3:
				cancellazione(fp);
				break;
			case 4:
				ricerca(fp);
				break;
			case 5:
				visualizzazione(fp);
				break;
			case 0:
				return 0;
				break;
			default:
				printf("\nScelta non disponibile");
				break;
		}		
	}
	return 0;
}

void inserimento(FILE *fp){
	char nome[20],cognome[20],indirizzo[20];
	int eta;
	fp=fopen("anagrafica.dat","a");
	if(fp==NULL){
		perror("\nerror");
		exit(1);
	}
	printf("\n\nInserisci i dati da aggiungere\nCognome: ");
	scanf("%s",cognome);
	fflush(stdin);
	printf("Nome: ");
	scanf("%s",nome);
	fflush(stdin);
	printf("Indirizzo (solo il nome della via): ");
	scanf("%s",indirizzo);
	fflush(stdin);
	printf("Eta': ");
	scanf("%d",&eta);
	fflush(stdin);
	putchar('\n');
	fprintf(fp,"\n\n%s, %s, %s, %d",cognome,nome,indirizzo,eta);
	fclose(fp);
}
void modifica(FILE *fp){
	char nome[20],cognome[20],indirizzo[20],fnome[20],fcognome[20],findirizzo[20];
	int eta,feta,p,ff,flag=0;//ff=fine file
	fp=fopen("anagrafica.dat","r+");
	if(fp==NULL){
		perror("\nerror");
		exit(1);
	}
	fseek(fp,0,SEEK_END);
	ff=ftell(fp);
	fseek(fp,0,SEEK_SET);
	printf("\n\nInserisci i vecchi dati da modificare\nCognome: ");
	scanf("%s",cognome);
	fflush(stdin);
	printf("Nome: ");
	scanf("%s",nome);
	fflush(stdin);
	printf("Indirizzo (solo il nome della via): ");
	scanf("%s",indirizzo);
	fflush(stdin);
	printf("Eta': ");
	scanf("%d",&eta);
	fflush(stdin);
	putchar('\n');
	do{
		p=ftell(fp);
		fscanf(fp,"%s",fcognome);
		fcognome[strlen(fcognome)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%s",fnome);
		fnome[strlen(fnome)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%s",findirizzo);
		findirizzo[strlen(findirizzo)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%d",&feta);
		if(strcmp(cognome,fcognome)==0 && strcmp(nome,fnome)==0 && strcmp(indirizzo,findirizzo)==0 && eta==feta){
			fseek(fp,p,SEEK_SET);	
			printf("Inserisci i nuovi dati\nCognome: ");
			scanf("%s",cognome);
			fflush(stdin);
			printf("Nome: ");
			scanf("%s",nome);
			fflush(stdin);
			printf("Indirizzo (solo il nome della via): ");
			scanf("%s",indirizzo);
			fflush(stdin);
			printf("Eta': ");
			scanf("%d",&eta);
			fflush(stdin);
			fprintf(fp,"\n\n%s, %s, %s, %d",cognome,nome,indirizzo,eta);
			putchar('\n');
			flag=1;
		}else if(ftell(fp)>=ff){
			printf("Persona non trovata!\n");
			flag=1;
		}
	}while(flag==0);
	putchar('\n');
	fclose(fp);
}
void cancellazione(FILE *fp){
	char nome[20],cognome[20],indirizzo[20],fnome[20],fcognome[20],findirizzo[20];
	int eta,feta,ff,flag=0,p1,p2;//ff=fine file
	fp=fopen("anagrafica.dat","r+");
	if(fp==NULL){
		perror("\nerror");
		exit(1);
	}
	fseek(fp,0,SEEK_END);
	ff=ftell(fp);
	fseek(fp,0,SEEK_SET);
	printf("\n\nInserisci i dati della persona da cancellare\nCognome: ");
	scanf("%s",cognome);
	fflush(stdin);
	printf("Nome: ");
	scanf("%s",nome);
	fflush(stdin);
	printf("Indirizzo (solo il nome della via): ");
	scanf("%s",indirizzo);
	fflush(stdin);
	printf("Eta': ");
	scanf("%d",&eta);
	fflush(stdin);
	putchar('\n');
	do{
		p1=ftell(fp);
		fscanf(fp,"%s",fcognome);
		fcognome[strlen(fcognome)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%s",fnome);
		fnome[strlen(fnome)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%s",findirizzo);
		findirizzo[strlen(findirizzo)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%d",&feta);
		p2=ftell(fp);
		if(strcmp(cognome,fcognome)==0 && strcmp(nome,fnome)==0 && strcmp(indirizzo,findirizzo)==0 && eta==feta){
			fseek(fp,p1,SEEK_SET);
			while(p1<p2){
				fputc(' ',fp);
				p1++;
			}
			flag=1;
		}else if(ftell(fp)>=ff){
			printf("Persona non trovata!\n");
			flag=1;
		}
	}while(flag==0);
	putchar('\n');
	fclose(fp);
}
void ricerca(FILE *fp){
	char nome[20],cognome[20],indirizzo[20],fnome[20],fcognome[20],findirizzo[20];
	int eta,feta,ff,flag=0;//ff=fine file
	fp=fopen("anagrafica.dat","r+");
	if(fp==NULL){
		perror("\nerror");
		exit(1);
	}
	fseek(fp,0,SEEK_END);
	ff=ftell(fp);
	fseek(fp,0,SEEK_SET);
	printf("\n\nInserisci i dati da cercare\nCognome: ");
	scanf("%s",cognome);
	fflush(stdin);
	printf("Nome: ");
	scanf("%s",nome);
	fflush(stdin);
	printf("Indirizzo (solo il nome della via): ");
	scanf("%s",indirizzo);
	fflush(stdin);
	printf("Eta': ");
	scanf("%d",&eta);
	fflush(stdin);
	putchar('\n');
	do{
		fscanf(fp,"%s",fcognome);
		fcognome[strlen(fcognome)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%s",fnome);
		fnome[strlen(fnome)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%s",findirizzo);
		findirizzo[strlen(findirizzo)-1]='\0'; //tolgo la virgola
		fscanf(fp,"%d",&feta);
		if(strcmp(cognome,fcognome)==0 && strcmp(nome,fnome)==0 && strcmp(indirizzo,findirizzo)==0 && eta==feta){
			printf("Persona trovata!\n");
			flag=1;
		}else if(ftell(fp)>=ff){
			printf("Persona non trovata!\n");
			flag=1;
		}
	}while(flag==0);
	putchar('\n');
	fclose(fp);
}
void visualizzazione(FILE *fp){
	char car;
	fp=fopen("anagrafica.dat","r");
	if(fp==NULL){
		perror("\nerror");
		exit(1);
	}
	putchar('\n');
	putchar('\n');
	while((car=fgetc(fp))!=EOF)
		printf("%c",car);
	putchar('\n');
	putchar('\n');
	fclose(fp);
}
