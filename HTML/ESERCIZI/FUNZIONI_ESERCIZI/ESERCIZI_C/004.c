#include <stdio.h>

int ValidData(int,int,int);
int TotData(int,int,int);

int main(){
	unsigned int gg1,mm1,aa1,gg2,mm2,aa2;
	int diff;
	do{
		printf("\t\tINSERIMENTO DATA 1 (gg/mm/aa)\n\n");
		printf("Giorno: ");
		scanf("%ui",&gg1);
		fflush(stdin);
		printf("Mese: ");
		scanf("%ui",&mm1);
		fflush(stdin);
		printf("Anno: ");
		scanf("%ui",&aa1);
		fflush(stdin);
	}while(ValidData(gg1,mm1,aa1)!=1);
	do{
		printf("\t\tINSERIMENTO DATA 2 (gg/mm/aa)\n\n");
		printf("Giorno: ");
		scanf("%ui",&gg2);
		fflush(stdin);
		printf("Mese: ");
		scanf("%ui",&mm2);
		fflush(stdin);
		printf("Anno: ");
		scanf("%ui",&aa2);
		fflush(stdin);
	}while(ValidData(gg2,mm2,aa2)!=1);
	if(TotData(gg1,mm1,aa1)>TotData(gg2,mm2,aa2)){
		diff=TotData(gg1,mm1,aa1)-TotData(gg2,mm2,aa2);
	}else{
		diff=TotData(gg2,mm2,aa2)-TotData(gg1,mm1,aa1);
	}
	printf("\n\nLa differenza tra le due date e' di %d giorni",diff);
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
				}else{
					if(gg>=1 && gg<=29){
						return 1;
					}else{
						return 0;
					}
				}
			}else{
				if(gg>=1 && gg<=28){
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

int TotData(int gg,int mm,int aa){
	int gtot=0;
	if(aa%4==0){
		if(aa%100==0){
			if(aa%400==0){
				gtot=gtot+(aa-1)*366;
			}
		}else{
			gtot=gtot+(aa-1)*366;
		}
	}else{
		gtot=gtot+(aa-1)*365;
	}
	if(mm<=2){
		if(aa%4==0){
			if(aa%100==0){
				if(aa%400==0){
					gtot=gtot+31+29;
				}
			}else{
				gtot=gtot+31+29;
			}
		}else{
			gtot=gtot+31+28;
		}
	}else if(mm<6){
		gtot=gtot+mm*31;
		gtot=gtot+1;
	}else if(mm<8){
		gtot=gtot+mm*31;
		gtot=gtot+2;
	}else if(mm>=9){
		gtot=gtot+mm*31;
		gtot=gtot+3;	
	}
	gtot=gtot+gg;
	return gtot;
}

