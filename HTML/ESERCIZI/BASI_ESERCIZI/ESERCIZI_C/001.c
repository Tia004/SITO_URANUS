#include <stdio.h>

int main(){
    int base, altezza, area;
    printf("\nI byte di un int sono %d\n", sizeof(base));

    printf("\nInserisci base: ");
    scanf("%d", &base);
    fflush(stdin);

    printf("\nInserisci altezza: ");
    scanf("%d", &altezza);
    fflush(stdin);
    
    area = base * altezza;

    printf("\nL'area vale: %d\n\n", area);
    return 0;
}