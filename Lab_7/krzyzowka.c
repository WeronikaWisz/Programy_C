#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(void){

	FILE *plik;
	plik=fopen("polski.txt", "r");

	int los, losowa;
	int dlugosc;
	int a=0;
	
	srand(time(NULL));

	los=rand()%109789;
	
	char tab[40];
	fseek(plik, los, 0); 
	fgets(tab, 40, plik);

	char temp[40];
	
	dlugosc=strlen(tab);

	printf("Slowo kluczowe: %s", tab);

	while(a<dlugosc){
		losowa=rand()%109789;
		fseek(plik, losowa, 0); 
		fgets(temp, 40, plik);
		if(tab[a]==temp[0]){
			printf("%s", temp);
			a++;
		}
	}

	fclose(plik);
	return 0;
}
