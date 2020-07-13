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
	
	int i, j;
	int size, n;
	printf("Ile lancuchow? ");
	scanf("%d", &n);
	size=n+1;
	char *wsk[size];
	for(i=0; i<size; i++){
		wsk[i]=adres();
	}
	for(j=0; j<size; j++){
		printf("%s", wsk[j]);
	}

return 0;
}