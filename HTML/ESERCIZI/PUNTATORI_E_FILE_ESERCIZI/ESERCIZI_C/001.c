#include<stdio.h>
#include<stdlib.h>
#define DIM 80
int count_char(char *, char);
int main() {
	char c, s[DIM];
	char *str;
	str=&s[0];
	printf("Inserire Stringa: ");
	gets(s);
	printf("Inserire carattere da contare: ");
	scanf("%c", &c);
	fflush(stdin);
	printf("Il carattere %c appare %d volte", c, count_char(str, c));
	return 0;
}
int count_char(char *str, char c) {
	if (*str=='\0')
		return 0;
	else
		if(*str==c)
			return count_char((str+1), c)+1;
		else
			return count_char((str+1), c);
}
