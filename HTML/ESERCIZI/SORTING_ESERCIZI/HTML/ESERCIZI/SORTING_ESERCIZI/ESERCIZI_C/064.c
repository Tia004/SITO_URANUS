#include <stdio.h>
#include <string.h>
#define DIM 4
#define L 50

typedef char string;
void load_string(string [][L]);
void view_string(string [][L]);
void name_sorting(string [][L]);
void lenght_sorting(string [][L]);
void vocal_sorting(string [][L]);
int vocal_count(string []);

int main(){
	string str[DIM][L];
	int ok;
	char c;
	load_string(str);
	do{
		printf("\n\n\nMENU\n\n0 - escape\nn - ordina le stringhe per nome in modo crescente\nd - ordina le stringhe per lunghezza in modo crescente\nv - ordina le stringhe contenenti piu' vocali in modo crescente\n");
		printf("Opzione: ");
		scanf("%c",&c);
		fflush(stdin);
		switch(c){
			case '0':
				printf("\nFINE");
				ok=1;
				break;
			case 'n':
				name_sorting(str);
				printf("\nStringhe ordinate per nome:\n\n");
				view_string(str);
				break;
			case 'd':
				lenght_sorting(str);
				printf("\n\nStringhe ordinate per lunghezza:\n\n");
				view_string(str);
				break;
			case 'v':
				vocal_sorting(str);
				printf("\n\nStringhe ordinate per numero di vocali:\n\n");
				view_string(str);
				break;
			default:
				printf("\nOPZIONE NON VALIDA");
		}
	}while(ok==0);
	return 0;
}

void load_string(string str[DIM][L]){
	int i;
	for(i=0;i<DIM;i++){
		printf("%d^ stringa: ",i+1);
		gets(str[i]);
		fflush(stdin);
	}
}

void view_string(string str[DIM][L]){
	int i;
	for(i=0;i<DIM;i++){
		puts(str[i]);
	}
}

void name_sorting(string str[DIM][L]){
	int i,j;
	char box[L];
	for(i=0;i<DIM;i++){
		for(j=i+1;j<DIM;j++){
			if(strcmp(str[i],str[j])==1){
				strcpy(box,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],box);
			}
		}
	}
}

void lenght_sorting(string str[DIM][L]){
	int i,j;
	char box[L];
	for(i=0;i<DIM;i++){
		for(j=i+1;j<DIM;j++){
			if(strlen(str[i])>strlen(str[j])){
				strcpy(box,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],box);
			}
		}
	}	
}

void vocal_sorting(string str[DIM][L]){
	int i,j;
	char box[L];
	for(i=0;i<DIM;i++){
		for(j=i+1;j<DIM;j++){
			if(vocal_count(str[i])>vocal_count(str[j])){
				strcpy(box,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],box);
			}
		}
	}
}

int vocal_count(string s[L]){
	int i,vcount=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			vcount++;
		}	
	}
	return vcount;
}
