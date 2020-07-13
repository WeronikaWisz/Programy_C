#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *adres(void){
	int dlugosc;
	char *pointer;
	char temp[50];
	fgets(temp, 50, stdin);
	dlugosc=strlen(temp);
	pointer=(char*)malloc((dlugosc+1)*sizeof(char));
	strcpy(pointer, temp);
	return pointer;
}

int main(void){
	
	char *wsk;
	wsk=adres();
	printf("%s", wsk);

return 0;
}