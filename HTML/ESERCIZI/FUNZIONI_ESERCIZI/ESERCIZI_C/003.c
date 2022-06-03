#include <stdio.h>

int ValidData(int,int,int);

int main(){
	int gg,mm,aa;
	printf("\t\tINSERIMENTO DATA (gg/mm/aa)");
	printf("\n\nGiorno: ");
	scanf("%d",&gg);
	fflush(stdin);
	printf("Mese: ");
	scanf("%d",&mm);
	fflush(stdin);
	printf("Anno: ");
	scanf("%d",&aa);
	fflush(stdin);
	if(ValidData(gg,mm,aa)==0){
		printf("\n\t\tDATA NON VALIDA");
	}else{
		printf("\n\t\tDATA  VALIDA");
	}
	return 0;
}

int ValidData(int gg,int mm,int aa){
	if(mm>0 && mm<=12){
		if(mm==4 || mm==6 || mm==9){
			if(gg>=1 && gg<=30){
				return 1;
			}else{
				return 0;
			}
		}else if(mm==2){
			if(aa%4==0){
				if(aa%100==0){
					if(aa%400==0){
						if(gg>=1 && gg<=29){
							return 1;
						}else{
							return 0;
						}
					}
				}
			}else{
				if(gg>=1 && gg<=29){
					return 1;
				}else{
					return 0;
				}
			}
		}else{
			if(gg>=1 && gg<=31){
				return 1;
			}else{
				return 0;
			}
		}
	}else{
		return 0;
	}
}
