#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void adres(int size, char *pointer[size]){

	int dlugosc;
	char temp[50];
	int i;

		for(i=0; i<size; i++){
			fgets(temp, 50, stdin);
			dlugosc=strlen(temp);
			pointer[i]=(char*)malloc((dlugosc+1)*sizeof(char));
			strcpy(pointer[i], temp);
		}
return;
}

int main(void){
	
	int n;
	printf("Ile lancuchow? ");
	scanf("%d", &n);
	int size;
	size=n+1;
	char *wsk[size];
	adres(size, wsk);
	int j;
	for(j=0; j<size; j++){
		printf("%s", wsk[j]);
	}

return 0;
}